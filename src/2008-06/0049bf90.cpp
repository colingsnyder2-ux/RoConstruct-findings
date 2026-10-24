// from server: 90% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// Complete1112-byte cdecl worker: shared data8 and URL string28 by value.
// Native Players.h, openrbx XML double-valued union, Http.h and Boost1.34 contracts.
// All sizes/offsets below are compile-asserted against measured target transport.
// 94% partial: queue-check ordering and register allocation still differ.
// Named pending queue plus compiler barrier preserve the two measured count reads.
// This is a codegen analog; class descriptions are supported by native source and target.
#include <intrin.h>
#include <string>
#include <list>
#include <queue>
#include <map>
#include <sstream>
#include <exception>
#include <stddef.h>
namespace boost {namespace detail {
struct sp_counted_base {
 virtual ~sp_counted_base(){}virtual void dispose()=0;virtual void destroy(){delete this;}
 long use_count_,weak_count_;
 void add_ref_copy(){_InterlockedIncrement(&use_count_);}
 void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
 void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {sp_counted_base*pi_;shared_count():pi_(0){}shared_count(const shared_count&r):pi_(r.pi_){if(pi_)pi_->add_ref_copy();}~shared_count(){if(pi_)pi_->release();}};
}
template<class T>struct shared_ptr {T*px;detail::shared_count pn;shared_ptr():px(0),pn(){}shared_ptr(const shared_ptr&r):px(r.px),pn(r.pn){}T*get()const{return px;}T*operator->()const{return px;}};
class thread_exception:public std::exception {int m_sys_err;protected:thread_exception();thread_exception(int);public:~thread_exception()throw();int native_error()const;};
class lock_error:public thread_exception {public:lock_error();lock_error(int);~lock_error()throw();virtual const char*what()const throw();};
struct mutex {
 void*m_mutex;bool m_critical_section;
 void do_lock();void do_unlock();
 struct scoped_lock {
 mutex&m_mutex;bool m_locked;
 explicit scoped_lock(mutex&m,bool initially_locked=true):m_mutex(m),m_locked(false){if(initially_locked)lock();}
 ~scoped_lock(){if(m_locked)unlock();}
 void lock(){if(m_locked)throw lock_error();m_mutex.do_lock();m_locked=true;}
 void unlock(){if(!m_locked)throw lock_error();m_mutex.do_unlock();m_locked=false;}
 };
};
}
namespace RBX {
struct Name {static const Name&declare(const char*,int=-1);};
struct Instance;
struct InstanceHandle {boost::shared_ptr<Instance>target;bool operator<(const InstanceHandle&)const;};
template<class T>struct Sibling {T*next;Sibling():next(0){}void setNextSibling(T*n){next=n;}};
template<class T>struct Parent {
 T*first;T*last;Parent():first(0),last(0){}
 void pushBackChild(T*child){if(!last)first=child;else last->setNextSibling(child);last=child;}
};
struct Http {const std::string url;std::string additionalHeaders;Http(const std::string&);~Http();void post(std::istream&,bool,std::string&);};
struct StandardOut {static boost::shared_ptr<StandardOut>singleton();};
void __cdecl printMessage(StandardOut*,int,const char*,...);
}
struct XmlElement;
struct XmlAttribute;
struct XmlNameValuePair {
 enum ValueType{NONE,NAME,STRING,CONTENTID,BOOL,INT,UINT,FLOAT,HANDLE,DOUBLE};
 const RBX::Name&tag;mutable ValueType valueType;
 union {std::string*stringValue;const RBX::Name*nameValue;void*handleValue;bool boolValue;int intValue;unsigned uintValue;float floatValue;double doubleValue;};
 XmlNameValuePair(const RBX::Name&t):tag(t),valueType(NONE){}
 XmlNameValuePair(const RBX::Name&t,int v):tag(t),valueType(INT),intValue(v){}
 XmlNameValuePair(const RBX::Name&,const std::string&);
 ~XmlNameValuePair(){clearValue();}
 void clearValue()const;
};
struct XmlAttribute:RBX::Sibling<XmlAttribute>,XmlNameValuePair {XmlAttribute(const RBX::Name&t,int v):XmlNameValuePair(t,v){}};
struct XmlElement:RBX::Sibling<XmlElement>,RBX::Parent<XmlElement>,XmlNameValuePair {
 RBX::Parent<XmlAttribute>attributes;
 explicit XmlElement(const RBX::Name&t):XmlNameValuePair(t){}
 XmlElement(const RBX::Name&,std::string);
 ~XmlElement();
 void addAttribute(const RBX::Name&t,int v){attributes.pushBackChild(new XmlAttribute(t,v));}
 XmlElement*addChild(XmlElement*e){pushBackChild(e);return e;}
};
struct XmlWriter {
 std::map<RBX::InstanceHandle,int>handles;std::ostream&stream;
 explicit XmlWriter(std::ostream&);
 virtual void serialize(const XmlElement*)=0;
};
struct TextXmlWriter:XmlWriter {
 TextXmlWriter(std::ostream&s):XmlWriter(s){}
 virtual void serialize(const XmlElement*);
 virtual void serializeNode(const XmlElement*,int);
};
namespace RBX {namespace Network {
struct AbuseReport {
 struct Message {int userID;std::string text;};
 int submitterID,allegedAbuserID;std::string comment;std::list<Message>messages;
 ~AbuseReport();AbuseReport&operator=(const AbuseReport&);
};
void __cdecl appendMessage(const AbuseReport::Message&,XmlElement*);
struct MessageAppender {void(__cdecl*function)(const AbuseReport::Message&,XmlElement*);XmlElement*container;MessageAppender(void(__cdecl*f)(const AbuseReport::Message&,XmlElement*),XmlElement*p):function(f),container(p){} };
MessageAppender __cdecl forEachMessages(std::list<AbuseReport::Message>::iterator,std::list<AbuseReport::Message>::iterator,MessageAppender);
struct AbuseReporter {
 struct data {std::queue<AbuseReport>queue;boost::mutex requestSync;};
 static int processRequests(boost::shared_ptr<data>,std::string);
};
int AbuseReporter::processRequests(boost::shared_ptr<data>d,std::string url){
 try {
  AbuseReport report;
  {
   boost::mutex::scoped_lock lock(d->requestSync);
   data*pending=d.get();
   if(pending->queue.empty())return 0;
   _ReadWriteBarrier();
   report=pending->queue.front();
  }
  std::stringstream stream;
  {
   TextXmlWriter writer(stream);
   XmlElement root(RBX::Name::declare("report"));
   root.addAttribute(RBX::Name::declare("userID"),report.submitterID);
   root.addChild(new XmlElement(RBX::Name::declare("comment"),report.comment));
   XmlElement*messages=root.addChild(new XmlElement(RBX::Name::declare("messages")));
   MessageAppender appender(appendMessage,messages);
   forEachMessages(report.messages.begin(),report.messages.end(),appender);
   writer.serialize(&root);
   stream.flush();
  }
  std::string response;
  RBX::Http(url).post(stream,false,response);
  RBX::printMessage(RBX::StandardOut::singleton().get(),1,"Posted abuse report to %s",url.c_str());
 }catch(const std::exception&e){
  RBX::printMessage(RBX::StandardOut::singleton().get(),2,"Unable to post abuse report to %s. %s",url.c_str(),e.what());
 }
 {
  boost::mutex::scoped_lock lock(d->requestSync);
  d->queue.pop();
 }
 return 1;
}
}}
typedef char report_size[sizeof(RBX::Network::AbuseReport)==64?1:-1];
typedef char queue_size[sizeof(std::queue<RBX::Network::AbuseReport>)==32?1:-1];
typedef char attribute_size[sizeof(XmlAttribute)==24?1:-1];
typedef char element_size[sizeof(XmlElement)==40?1:-1];
typedef char writer_size[sizeof(TextXmlWriter)==40?1:-1];
typedef char http_size[sizeof(RBX::Http)==56?1:-1];
typedef char data_mutex_offset[offsetof(RBX::Network::AbuseReporter::data,requestSync)==32?1:-1];
