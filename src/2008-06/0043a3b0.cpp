// from server: 100% by king_originala
// roc 2008-06 0043a3b0  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a3b0
//
// 0043a3b0  83ec38               sub esp, 0x38
// 0043a3b3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0043a3b7  8b10                 mov edx, dword ptr [eax]
// 0043a3b9  53                   push ebx
// 0043a3ba  55                   push ebp
// 0043a3bb  56                   push esi
// 0043a3bc  57                   push edi
// 0043a3bd  8bf9                 mov edi, ecx
// 0043a3bf  8b7710               mov esi, dword ptr [edi + 0x10]
// 0043a3c2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043a3c5  897c2414             mov dword ptr [esp + 0x14], edi
// 0043a3c9  c644241100           mov byte ptr [esp + 0x11], 0
// 0043a3ce  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0043a3d2  89542428             mov dword ptr [esp + 0x28], edx
// 0043a3d6  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0043a3d9  7606                 jbe 0x43a3e1
// 0043a3db  ff1590288000         call dword ptr [0x802890]
// 0043a3e1  8b6f04               mov ebp, dword ptr [edi + 4]
// 0043a3e4  8bde                 mov ebx, esi
// 0043a3e6  8b7714               mov esi, dword ptr [edi + 0x14]
// 0043a3e9  896c2420             mov dword ptr [esp + 0x20], ebp
// 0043a3ed  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043a3f1  8974241c             mov dword ptr [esp + 0x1c], esi
// 0043a3f5  397710               cmp dword ptr [edi + 0x10], esi
// 0043a3f8  7606                 jbe 0x43a400
// 0043a3fa  ff1590288000         call dword ptr [0x802890]
// 0043a400  8b4704               mov eax, dword ptr [edi + 4]
// 0043a403  89442438             mov dword ptr [esp + 0x38], eax
// 0043a407  85ed                 test ebp, ebp
// 0043a409  7406                 je 0x43a411
// 0043a40b  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 0043a40f  7406                 je 0x43a417
// 0043a411  ff1590288000         call dword ptr [0x802890]
// 0043a417  3bde                 cmp ebx, esi
// 0043a419  0f8411020000         je 0x43a630
// 0043a41f  85ed                 test ebp, ebp
// 0043a421  0f8509010000         jne 0x43a530
// 0043a427  ff1590288000         call dword ptr [0x802890]
// 0043a42d  33c0                 xor eax, eax
// 0043a42f  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043a432  7206                 jb 0x43a43a
// 0043a434  ff1590288000         call dword ptr [0x802890]
// 0043a43a  8b0b                 mov ecx, dword ptr [ebx]
// 0043a43c  8d542418             lea edx, [esp + 0x18]
// 0043a440  52                   push edx
// 0043a441  8d442434             lea eax, [esp + 0x34]
// 0043a445  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0043a449  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0043a44d  50                   push eax
// 0043a44e  e8cdfeffff           call 0x43a320
// 0043a453  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0043a457  85ff                 test edi, edi
// 0043a459  7406                 je 0x43a461
// 0043a45b  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0043a45f  7406                 je 0x43a467
// 0043a461  ff1590288000         call dword ptr [0x802890]
// 0043a467  8b742434             mov esi, dword ptr [esp + 0x34]
// 0043a46b  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0043a46f  0f8455010000         je 0x43a5ca
// 0043a475  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043a47b  85ff                 test edi, edi
// 0043a47d  0f85b5000000         jne 0x43a538
// 0043a483  ffd3                 call ebx
// 0043a485  33c0                 xor eax, eax
// 0043a487  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043a48a  7502                 jne 0x43a48e
// 0043a48c  ffd3                 call ebx
// 0043a48e  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043a491  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043a494  7602                 jbe 0x43a498
// 0043a496  ffd3                 call ebx
// 0043a498  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0043a49b  85ff                 test edi, edi
// 0043a49d  0f859c000000         jne 0x43a53f
// 0043a4a3  ff1590288000         call dword ptr [0x802890]
// 0043a4a9  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043a4ac  7506                 jne 0x43a4b4
// 0043a4ae  ff1590288000         call dword ptr [0x802890]
// 0043a4b4  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043a4b7  897c2418             mov dword ptr [esp + 0x18], edi
// 0043a4bb  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043a4be  7606                 jbe 0x43a4c6
// 0043a4c0  ff1590288000         call dword ptr [0x802890]
// 0043a4c6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043a4c9  894c2440             mov dword ptr [esp + 0x40], ecx
// 0043a4cd  8d4900               lea ecx, [ecx]
// 0043a4d0  85db                 test ebx, ebx
// 0043a4d2  7406                 je 0x43a4da
// 0043a4d4  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0043a4d8  7406                 je 0x43a4e0
// 0043a4da  ff1590288000         call dword ptr [0x802890]
// 0043a4e0  3bef                 cmp ebp, edi
// 0043a4e2  0f84da000000         je 0x43a5c2
// 0043a4e8  807c241100           cmp byte ptr [esp + 0x11], 0
// 0043a4ed  755b                 jne 0x43a54a
// 0043a4ef  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043a4f5  85db                 test ebx, ebx
// 0043a4f7  754d                 jne 0x43a546
// 0043a4f9  ffd7                 call edi
// 0043a4fb  33c0                 xor eax, eax
// 0043a4fd  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043a500  7202                 jb 0x43a504
// 0043a502  ffd7                 call edi
// 0043a504  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043a508  8b4500               mov eax, dword ptr [ebp]
// 0043a50b  81c6e0feffff         add esi, 0xfffffee0
// 0043a511  50                   push eax
// 0043a512  8bce                 mov ecx, esi
// 0043a514  e8c7fcffff           call 0x43a1e0
// 0043a519  8b16                 mov edx, dword ptr [esi]
// 0043a51b  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0043a521  88442412             mov byte ptr [esp + 0x12], al
// 0043a525  8d442412             lea eax, [esp + 0x12]
// 0043a529  50                   push eax
// 0043a52a  8bce                 mov ecx, esi
// 0043a52c  ffd2                 call edx
// 0043a52e  eb6a                 jmp 0x43a59a
// 0043a530  8b4500               mov eax, dword ptr [ebp]
// 0043a533  e9f7feffff           jmp 0x43a42f
// 0043a538  8b07                 mov eax, dword ptr [edi]
// 0043a53a  e948ffffff           jmp 0x43a487
// 0043a53f  8b3f                 mov edi, dword ptr [edi]
// 0043a541  e963ffffff           jmp 0x43a4a9
// 0043a546  8b03                 mov eax, dword ptr [ebx]
// 0043a548  ebb3                 jmp 0x43a4fd
// 0043a54a  85db                 test ebx, ebx
// 0043a54c  756c                 jne 0x43a5ba
// 0043a54e  ff1590288000         call dword ptr [0x802890]
// 0043a554  33c0                 xor eax, eax
// 0043a556  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043a559  7206                 jb 0x43a561
// 0043a55b  ff1590288000         call dword ptr [0x802890]
// 0043a561  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043a565  8b4500               mov eax, dword ptr [ebp]
// 0043a568  81c6e0feffff         add esi, 0xfffffee0
// 0043a56e  50                   push eax
// 0043a56f  8bce                 mov ecx, esi
// 0043a571  e86afcffff           call 0x43a1e0
// 0043a576  88442413             mov byte ptr [esp + 0x13], al
// 0043a57a  8b06                 mov eax, dword ptr [esi]
// 0043a57c  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0043a582  8d4c2413             lea ecx, [esp + 0x13]
// 0043a586  51                   push ecx
// 0043a587  8d542416             lea edx, [esp + 0x16]
// 0043a58b  52                   push edx
// 0043a58c  8bce                 mov ecx, esi
// 0043a58e  ffd0                 call eax
// 0043a590  84c0                 test al, al
// 0043a592  7466                 je 0x43a5fa
// 0043a594  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043a59a  c644241101           mov byte ptr [esp + 0x11], 1
// 0043a59f  85db                 test ebx, ebx
// 0043a5a1  751b                 jne 0x43a5be
// 0043a5a3  ffd7                 call edi
// 0043a5a5  33c0                 xor eax, eax
// 0043a5a7  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043a5aa  7202                 jb 0x43a5ae
// 0043a5ac  ffd7                 call edi
// 0043a5ae  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0043a5b2  83c508               add ebp, 8
// 0043a5b5  e916ffffff           jmp 0x43a4d0
// 0043a5ba  8b03                 mov eax, dword ptr [ebx]
// 0043a5bc  eb98                 jmp 0x43a556
// 0043a5be  8b03                 mov eax, dword ptr [ebx]
// 0043a5c0  ebe5                 jmp 0x43a5a7
// 0043a5c2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043a5c6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043a5ca  85ed                 test ebp, ebp
// 0043a5cc  7527                 jne 0x43a5f5
// 0043a5ce  ff1590288000         call dword ptr [0x802890]
// 0043a5d4  33c0                 xor eax, eax
// 0043a5d6  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043a5d9  7206                 jb 0x43a5e1
// 0043a5db  ff1590288000         call dword ptr [0x802890]
// 0043a5e1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043a5e5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043a5e9  83c304               add ebx, 4
// 0043a5ec  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043a5f0  e912feffff           jmp 0x43a407
// 0043a5f5  8b4500               mov eax, dword ptr [ebp]
// 0043a5f8  ebdc                 jmp 0x43a5d6
// 0043a5fa  51                   push ecx
// 0043a5fb  8bcc                 mov ecx, esp
// 0043a5fd  89642450             mov dword ptr [esp + 0x50], esp
// 0043a601  6816b78000           push 0x80b716
// 0043a606  ff15103f8000         call dword ptr [0x803f10]
// 0043a60c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043a610  81c6e0feffff         add esi, 0xfffffee0
// 0043a616  8bce                 mov ecx, esi
// 0043a618  e8d3732d00           call 0x7119f0
// 0043a61d  6a00                 push 0
// 0043a61f  8bce                 mov ecx, esi
// 0043a621  e8aa6a2d00           call 0x7110d0
// 0043a626  5f                   pop edi
// 0043a627  5e                   pop esi
// 0043a628  5d                   pop ebp
// 0043a629  5b                   pop ebx
// 0043a62a  83c438               add esp, 0x38
// 0043a62d  c20400               ret 4
// 0043a630  33c9                 xor ecx, ecx
// 0043a632  384c2411             cmp byte ptr [esp + 0x11], cl
// 0043a636  0f94c1               sete cl
// 0043a639  51                   push ecx
// 0043a63a  8d8fe0feffff         lea ecx, [edi - 0x120]
// 0043a640  e88b6a2d00           call 0x7110d0
// 0043a645  5f                   pop edi
// 0043a646  5e                   pop esi
// 0043a647  5d                   pop ebp
// 0043a648  5b                   pop ebx
// 0043a649  83c438               add esp, 0x38
// 0043a64c  c20400               ret 4

#include <intrin.h>
#include <utility>
namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}

#include <vector>
#include <map>
namespace G3D {struct Vector3 {float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}Vector3& operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}};}
struct Instance;
struct ClassDescriptor;
typedef std::vector<boost::shared_ptr<Instance> > Instances;
typedef std::map<const ClassDescriptor*,Instances> Selection;
struct __declspec(dllimport) CString {void* data;CString(const char*);CString(const CString&);~CString();};
struct GridBase {virtual ~GridBase();
virtual void slot1();
virtual void slot2();
virtual void slot3();
virtual void slot4();
virtual void slot5();
virtual void slot6();
virtual void slot7();
virtual void slot8();
virtual void slot9();
virtual void slot10();
virtual void slot11();
virtual void slot12();
virtual void slot13();
virtual void slot14();
virtual void slot15();
virtual void slot16();
virtual void slot17();
virtual void slot18();
virtual void slot19();
virtual void slot20();
virtual void slot21();
virtual void slot22();
virtual void slot23();
virtual void slot24();
virtual void slot25();
virtual void slot26();
virtual void slot27();
virtual void slot28();
virtual void slot29();
virtual void slot30();
virtual void slot31();
virtual void slot32();
virtual void slot33();
virtual void slot34();
virtual void slot35();
virtual void slot36();
virtual void slot37();
virtual void slot38();
virtual void slot39();
virtual void slot40();
virtual void slot41();
virtual void slot42();
virtual void slot43();
virtual void slot44();
virtual void slot45();
virtual void slot46();
virtual void slot47();
virtual void slot48();
virtual void slot49();
virtual void slot50();
virtual void slot51();
virtual void slot52();
virtual void slot53();
virtual void slot54();
virtual void slot55();
virtual void slot56();
virtual void slot57();
virtual void slot58();
virtual void slot59();
virtual void slot60();
 virtual void setCommon(const bool&);
 virtual bool equals(const bool&,const bool&);
 char padding[0x11c];
 bool value(Instance*);
 void SetValue(CString);
 void SetHidden(int);
};
struct UpdateBase {virtual void update(Selection&);std::vector<const ClassDescriptor*> classes;};
struct XItem:GridBase,UpdateBase {void update(Selection&);};
void XItem::update(Selection& selection){
 bool common;
 bool foundAny=false;
 Selection::iterator selectionEnd=selection.end();
 for(std::vector<const ClassDescriptor*>::const_iterator c=classes.begin(),ce=classes.end();c!=ce;++c){
  const ClassDescriptor* key=*c;
  Selection::iterator selected=selection.find(key);
  if(selected!=selectionEnd){
   for(Instances::iterator i=selected->second.begin(),end=selected->second.end();i!=end;++i){
    if(!foundAny){common=value(i->get());setCommon(common);}
    else if(!equals(common,value(i->get()))){
     SetValue(CString(""));
     SetHidden(0);return;
    }
    foundAny=true;
   }
  }
 }
 SetHidden(!foundAny);
}
