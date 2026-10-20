// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_filteredconnection_e1c23ad221007ccd.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
namespace RBX { class Instance { public: virtual ~Instance(); }; class PVInstance : public Instance {}; class ServiceProvider : public Instance {}; }
typedef std::vector<boost::shared_ptr<RBX::Instance> > Vector;
struct Source { char pad[0x154]; Vector* children; void connect(unsigned*); };
struct Listener { void append(RBX::PVInstance* const&); };
struct Argument { unsigned reserved[2]; RBX::Instance* object; };
RBX::ServiceProvider* __cdecl service(RBX::Instance*);
boost::shared_ptr<Source> __cdecl convert(RBX::ServiceProvider*);
struct S { char pad[0x130]; unsigned connection; boost::shared_ptr<Source> source; Listener listener; void base(Argument*); void f(Argument*); };
void S::f(Argument* arg) {
 base(arg);
 if(!source) {
 source=convert(service(arg->object));
 if(source) {
 for(Vector::iterator i=source->children->begin();i!=source->children->end();++i) {
 RBX::PVInstance* object=dynamic_cast<RBX::PVInstance*>(i->get());
 if(object) listener.append(object);
 }
 source->connect(&connection);
 }
 }
}
