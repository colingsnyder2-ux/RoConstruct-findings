// from server: 72% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /Oy /GF /GS- /EHsc /MD
// Native leaderboard compilation. Observed Instance prefixes create no local Instance objects or RTTI.
#include <string>
#include <vector>
#include <map>
#include <typeinfo>
#include <cstddef>
#include <intrin.h>
namespace boost {
namespace noncopyable_ {class noncopyable {protected:noncopyable(){}~noncopyable(){}private:noncopyable(const noncopyable&);const noncopyable&operator=(const noncopyable&);};}typedef noncopyable_::noncopyable noncopyable;
namespace detail {
// Actual Boost1.34.1 Windows counted base; only unused methods are omitted.
class sp_counted_base {
 sp_counted_base(const sp_counted_base&);sp_counted_base&operator=(const sp_counted_base&);
 long use_count_,weak_count_;
public:
 sp_counted_base():use_count_(1),weak_count_(1){}
 virtual ~sp_counted_base(){}
 virtual void dispose()=0;
 virtual void destroy(){delete this;}
 virtual void*get_deleter(const std::type_info&)=0;
 void add_ref_copy(){_InterlockedIncrement(&use_count_);}
 void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
 void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
};
class shared_count {sp_counted_base*pi_;
public:shared_count():pi_(0){}
 shared_count(const shared_count&r):pi_(r.pi_){if(pi_)pi_->add_ref_copy();}
 ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T>class shared_ptr {T*px;detail::shared_count pn;
public:shared_ptr():px(0),pn(){}
 T*get()const{return px;}T&operator*()const{return *px;}T*operator->()const{return px;}
 typedef T*shared_ptr::*unspecified_bool_type;
 operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
};
// The existing client instantiation at005018d0 is the genuine conversion boundary.
template<class Target,class Source>Target lexical_cast(const Source&);
}
namespace RBX {
template<class T>class CopyOnWrite:public boost::noncopyable {boost::shared_ptr<T>object;
public:operator typename boost::shared_ptr<T>::unspecified_bool_type()const{return object;}
 const T&operator*()const{return *object.get();}const T*operator->()const{return object.get();}
};
class Instance;
typedef std::vector<boost::shared_ptr<Instance> >Instances;
class Instance {public:char unobserved00[0x108];CopyOnWrite<Instances>children;std::string name;
 size_t numChildren()const; // Native out-of-line boundary0048ae20.
 Instance*getChild(size_t i){return (*children)[i].get();}
 const std::string&getName()const{return name;}
 Instance*findFirstChildByName(const std::string&)const;
};
namespace Reflection {
class DescribedBase;
template<class T>class TypedPropertyDescriptor {public:
 // Native RTTI-linked GetSet implementations prove these four actual methods.
 // Two predicate slots precede the value getter; there is no virtual destructor.
 class GetSet {public:
  virtual bool isReadOnly()const=0;
  virtual bool isWriteOnly()const=0;
  virtual T getValue(const DescribedBase*)const=0;
  virtual void setValue(DescribedBase*,const T&)const=0;
 };
};
}
// Actual pointer storage read at97d39c in IntValue's native descriptor.
extern Reflection::TypedPropertyDescriptor<int>::GetSet*nativeIntValueGetSet;
// Native Instance's actual DescribedBase subobject is at+14; preserve the null conversion.
const Reflection::DescribedBase*observedDescribedBase(const Instance*p){return p?reinterpret_cast<const Reflection::DescribedBase*>(reinterpret_cast<const char*>(p)+0x14):0;}
extern const type_info nativeInstanceType,nativeIntValueType;
extern "C" void*__cdecl __RTDynamicCast(void*,long,void*,void*,int);
namespace Network {class Players {public:boost::shared_ptr<const Instances>getPlayers();};}
class Team;
namespace Network {class Player;}
class Teams {public:boost::shared_ptr<const Instances>getTeams();Team*getTeamFromPlayer(Network::Player*);};
// SDK Teams has an Instance primary base. Only its observed zero-adjustment receiver is consumed.
static Instance&observedTeamsInstance(Teams*p){return *reinterpret_cast<Instance*>(p);}
class ServiceProvider {public:template<class T>static T*find(const Instance*);};
extern const type_info nativeTeamType;
class LeaderboardData {public:
 std::vector<std::string>statNamesList;
 std::map<Team*,std::vector<std::string> >playersByTeamList;
 std::map<std::string,std::map<std::string,int> >statMap;
 std::map<Team*,std::map<std::string,int> >teamTotals;
 Instance*context;
 void CompileData();
 void AddTuple(std::string,Team*,std::string,int);
};
void LeaderboardData::CompileData() {
 Network::Players*players=ServiceProvider::find<Network::Players>(context);
 Teams*teams=ServiceProvider::find<Teams>(context);
 boost::shared_ptr<const Instances>teamList=teams->getTeams();
 boost::shared_ptr<const Instances>playerList=players->getPlayers();
 for(size_t i=0;i<playerList->size();++i) {
  Instance*player=playerList->at(i).get();
  Team*team=teams->getTeamFromPlayer(reinterpret_cast<Network::Player*>(player));
  playersByTeamList[team].push_back(player->getName());
  Instance*stats=player->findFirstChildByName("leaderstats");
  if(stats) {
   for(size_t j=0;j<stats->numChildren();++j) {
    Instance*intValue=static_cast<Instance*>(__RTDynamicCast(stats->getChild(j),0,(void*)&nativeInstanceType,(void*)&nativeIntValueType,0));
    if(intValue)AddTuple(player->getName(),teams->getTeamFromPlayer(reinterpret_cast<Network::Player*>(player)),intValue->getName(),nativeIntValueGetSet->getValue(observedDescribedBase(intValue)));
   }
  }
 }
 if(teams)for(size_t i=0;i<observedTeamsInstance(teams).numChildren();++i) {
  Team*team=static_cast<Team*>(__RTDynamicCast(observedTeamsInstance(teams).getChild(i),0,(void*)&nativeInstanceType,(void*)&nativeTeamType,0));
  if(team)for(size_t j=0;j<statNamesList.size();++j) {
   teamTotals[team][statNamesList[j]]=0;
   for(size_t k=0;k<playersByTeamList[team].size();++k) {
    int statValue=statMap[playersByTeamList[team][k]][statNamesList[j]];
    teamTotals[team][statNamesList[j]]+=statValue;
   }
  }
 }
}
typedef char native_leaderboard_context[offsetof(LeaderboardData,context)==0x78?1:-1];
typedef char native_leaderboard_size[sizeof(LeaderboardData)==124?1:-1];
typedef char native_leaderboard_names[offsetof(LeaderboardData,statNamesList)==0?1:-1];
typedef char native_leaderboard_players[offsetof(LeaderboardData,playersByTeamList)==0x18?1:-1];
typedef char native_leaderboard_stats[offsetof(LeaderboardData,statMap)==0x38?1:-1];
typedef char native_leaderboard_totals[offsetof(LeaderboardData,teamTotals)==0x58?1:-1];
}

typedef char native_compile_counted_base[sizeof(boost::detail::sp_counted_base)==12?1:-1];
typedef char native_compile_ownership[sizeof(boost::shared_ptr<const RBX::Instances>)==8?1:-1];
typedef char native_compile_cow[sizeof(RBX::CopyOnWrite<RBX::Instances>)==8?1:-1];
typedef char native_compile_getset[sizeof(RBX::Reflection::TypedPropertyDescriptor<int>::GetSet)==4?1:-1];
typedef char native_compile_children[offsetof(RBX::Instance,children)==0x108?1:-1];
typedef char native_compile_name[offsetof(RBX::Instance,name)==0x110?1:-1];
