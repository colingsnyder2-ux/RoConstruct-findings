// Native template instantiations; declarations and layouts come from adopted SDK headers.
// Genuine-header instantiations: signal_desc_fire.cpp
#undef _RELEASEASSERT
#include "reflection/object.h"
#include "reflection/signal.h"
namespace RBX { class Instance; }
template void RBX::Reflection::SignalDescImpl<2,void(boost::shared_ptr<RBX::Instance>,int)>::fire(RBX::Reflection::SignalSource*,boost::shared_ptr<RBX::Instance>,int);
template void RBX::Reflection::SignalDescImpl<1,void(boost::shared_ptr<RBX::Instance>)>::fire(RBX::Reflection::SignalSource*,const boost::shared_ptr<RBX::Instance>);
template void RBX::Reflection::SignalDescImpl<1,void(int)>::fire(RBX::Reflection::SignalSource*,const int);
template void RBX::Reflection::SignalDescImpl<0,void(void)>::fire(RBX::Reflection::SignalSource*);

// Genuine-header instantiations: reflection_value_vector.cpp
#include "reflection/type.h"

template class std::vector<RBX::Reflection::Value>;

// Genuine-header instantiations: boost_vector_signal.cpp
#include <boost/signal.hpp>
#include "G3D/Vector3.h"
template class boost::signal1<void, G3D::Vector3>;

// Genuine-header instantiations: instance_entry_vector.cpp
#include <vector>
#include <utility>
#include <boost/shared_ptr.hpp>
namespace RBX { class Instance; }
typedef std::pair<unsigned int, boost::shared_ptr<RBX::Instance> > NativeEntry;
template class std::vector<NativeEntry>;

// Genuine-header instantiations: boost_double_signal.cpp
#include <boost/signal.hpp>
template class boost::signal1<void, double>;

// Genuine-header instantiations: boost_bound_signal.cpp
#include <boost/signal.hpp>
#include <boost/shared_ptr.hpp>
namespace RBX { class Instance; }
typedef boost::shared_ptr<RBX::Instance> P;
typedef boost::function2<void, P, int> F;
typedef boost::signals::detail::call_bound2<void>::caller<P, int, F> C;
template boost::signals::detail::unusable C::operator()(const boost::signals::detail::connection_slot_pair&) const;

// Genuine-header instantiations: sound_cache_map.cpp
#undef _RELEASEASSERT
#include "util/Sound.h"
template class std::map<RBX::Soundscape::SoundId, boost::shared_ptr<RBX::Soundscape::Sound> >;

// Genuine-header instantiations: string_vector_find.cpp
#include <string>
#include <vector>
#include <algorithm>
template std::string* std::find<std::string*,std::string>(std::string*,std::string*,const std::string&);
template const std::string* std::find<const std::string*,std::string>(const std::string*,const std::string*,const std::string&);
template std::vector<std::string>::iterator std::find<std::vector<std::string>::iterator,std::string>(std::vector<std::string>::iterator,std::vector<std::string>::iterator,const std::string&);
template std::vector<std::string>::const_iterator std::find<std::vector<std::string>::const_iterator,std::string>(std::vector<std::string>::const_iterator,std::vector<std::string>::const_iterator,const std::string&);
