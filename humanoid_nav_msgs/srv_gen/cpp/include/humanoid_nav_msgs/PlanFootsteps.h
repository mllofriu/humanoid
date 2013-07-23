/* Auto-generated by genmsg_cpp for file /home/ludo/workspace/rosbuild_ws/humanoid_stack/humanoid_msgs/humanoid_nav_msgs/srv/PlanFootsteps.srv */
#ifndef HUMANOID_NAV_MSGS_SERVICE_PLANFOOTSTEPS_H
#define HUMANOID_NAV_MSGS_SERVICE_PLANFOOTSTEPS_H
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

#include "ros/service_traits.h"

#include "geometry_msgs/Pose2D.h"
#include "geometry_msgs/Pose2D.h"


#include "humanoid_nav_msgs/StepTarget.h"

namespace humanoid_nav_msgs
{
template <class ContainerAllocator>
struct PlanFootstepsRequest_ {
  typedef PlanFootstepsRequest_<ContainerAllocator> Type;

  PlanFootstepsRequest_()
  : start()
  , goal()
  {
  }

  PlanFootstepsRequest_(const ContainerAllocator& _alloc)
  : start(_alloc)
  , goal(_alloc)
  {
  }

  typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _start_type;
   ::geometry_msgs::Pose2D_<ContainerAllocator>  start;

  typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _goal_type;
   ::geometry_msgs::Pose2D_<ContainerAllocator>  goal;


  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PlanFootstepsRequest
typedef  ::humanoid_nav_msgs::PlanFootstepsRequest_<std::allocator<void> > PlanFootstepsRequest;

typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest> PlanFootstepsRequestPtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsRequest const> PlanFootstepsRequestConstPtr;


template <class ContainerAllocator>
struct PlanFootstepsResponse_ {
  typedef PlanFootstepsResponse_<ContainerAllocator> Type;

  PlanFootstepsResponse_()
  : result(false)
  , footsteps()
  , costs(0.0)
  , final_eps(0.0)
  , planning_time(0.0)
  , expanded_states(0)
  {
  }

  PlanFootstepsResponse_(const ContainerAllocator& _alloc)
  : result(false)
  , footsteps(_alloc)
  , costs(0.0)
  , final_eps(0.0)
  , planning_time(0.0)
  , expanded_states(0)
  {
  }

  typedef uint8_t _result_type;
  uint8_t result;

  typedef std::vector< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::other >  _footsteps_type;
  std::vector< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::humanoid_nav_msgs::StepTarget_<ContainerAllocator> >::other >  footsteps;

  typedef double _costs_type;
  double costs;

  typedef double _final_eps_type;
  double final_eps;

  typedef double _planning_time_type;
  double planning_time;

  typedef int64_t _expanded_states_type;
  int64_t expanded_states;


  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PlanFootstepsResponse
typedef  ::humanoid_nav_msgs::PlanFootstepsResponse_<std::allocator<void> > PlanFootstepsResponse;

typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsResponse> PlanFootstepsResponsePtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::PlanFootstepsResponse const> PlanFootstepsResponseConstPtr;

struct PlanFootsteps
{

typedef PlanFootstepsRequest Request;
typedef PlanFootstepsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct PlanFootsteps
} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5e8ecd9fb61e382b8974a904baeee367";
  }

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5e8ecd9fb61e382bULL;
  static const uint64_t static_value2 = 0x8974a904baeee367ULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/PlanFootstepsRequest";
  }

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Pose2D start\n\
geometry_msgs/Pose2D goal\n\
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

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1af07cd1d4ffe34a9a731e87aa13835c";
  }

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1af07cd1d4ffe34aULL;
  static const uint64_t static_value2 = 0x9a731e87aa13835cULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/PlanFootstepsResponse";
  }

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool result\n\
humanoid_nav_msgs/StepTarget[] footsteps\n\
float64 costs\n\
float64 final_eps\n\
float64 planning_time\n\
int64 expanded_states\n\
\n\
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

  static const char* value(const  ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.start);
    stream.next(m.goal);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PlanFootstepsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
    stream.next(m.footsteps);
    stream.next(m.costs);
    stream.next(m.final_eps);
    stream.next(m.planning_time);
    stream.next(m.expanded_states);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PlanFootstepsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<humanoid_nav_msgs::PlanFootsteps> {
  static const char* value() 
  {
    return "6776471c1b6635688929b81b014b1c1c";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootsteps&) { return value(); } 
};

template<>
struct DataType<humanoid_nav_msgs::PlanFootsteps> {
  static const char* value() 
  {
    return "humanoid_nav_msgs/PlanFootsteps";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootsteps&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6776471c1b6635688929b81b014b1c1c";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/PlanFootsteps";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootstepsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6776471c1b6635688929b81b014b1c1c";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/PlanFootsteps";
  }

  static const char* value(const humanoid_nav_msgs::PlanFootstepsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HUMANOID_NAV_MSGS_SERVICE_PLANFOOTSTEPS_H

