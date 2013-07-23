/* Auto-generated by genmsg_cpp for file /home/ludo/workspace/rosbuild_ws/humanoid_stack/humanoid_msgs/humanoid_nav_msgs/msg/ExecFootstepsGoal.msg */
#ifndef HUMANOID_NAV_MSGS_MESSAGE_EXECFOOTSTEPSGOAL_H
#define HUMANOID_NAV_MSGS_MESSAGE_EXECFOOTSTEPSGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "humanoid_nav_msgs/StepTarget.h"

namespace humanoid_nav_msgs
{
template <class ContainerAllocator>
struct ExecFootstepsGoal_ {
  typedef ExecFootstepsGoal_<ContainerAllocator> Type;

  ExecFootstepsGoal_()
  : footsteps()
  , feedback_frequency(0.0)
  {
  }

  ExecFootstepsGoal_(const ContainerAllocator& _alloc)
  : footsteps(_alloc)
  , feedback_frequency(0.0)
  {
  }

  typedef std::vector< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::other >  _footsteps_type;
  std::vector< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::other >  footsteps;

  typedef double _feedback_frequency_type;
  double feedback_frequency;


  typedef boost::shared_ptr< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ExecFootstepsGoal
typedef  ::humanoid_nav_msgs::ExecFootstepsGoal_<std::allocator<void> > ExecFootstepsGoal;

typedef boost::shared_ptr< ::humanoid_nav_msgs::ExecFootstepsGoal> ExecFootstepsGoalPtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::ExecFootstepsGoal const> ExecFootstepsGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "40a3f8092ef3bb49c3253baa6eb94932";
  }

  static const char* value(const  ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x40a3f8092ef3bb49ULL;
  static const uint64_t static_value2 = 0xc3253baa6eb94932ULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/ExecFootstepsGoal";
  }

  static const char* value(const  ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
humanoid_nav_msgs/StepTarget[] footsteps\n\
float64 feedback_frequency\n\
\n\
================================================================================\n\
MSG: humanoid_nav_msgs/StepTarget\n\
# Target for a single stepping motion of a humanoid's leg\n\
\n\
geometry_msgs/Pose2D pose   # step pose as relative offset to last leg\n\
uint8 leg                   # which leg to use (left/right, see below)\n\
\n\
uint8 right=0               # right leg constant\n\
uint8 left=1                # left leg constant\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const  ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.footsteps);
    stream.next(m.feedback_frequency);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ExecFootstepsGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::humanoid_nav_msgs::ExecFootstepsGoal_<ContainerAllocator> & v) 
  {
    s << indent << "footsteps[]" << std::endl;
    for (size_t i = 0; i < v.footsteps.size(); ++i)
    {
      s << indent << "  footsteps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::stream(s, indent + "    ", v.footsteps[i]);
    }
    s << indent << "feedback_frequency: ";
    Printer<double>::stream(s, indent + "  ", v.feedback_frequency);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HUMANOID_NAV_MSGS_MESSAGE_EXECFOOTSTEPSGOAL_H

