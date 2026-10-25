// from server: 100% by king_originala
// roc 2008-06 004b8620  unit: RBX::Network::Replicator::NewInstanceItem  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b8620
//
// 004b8620  6aff                 push -1
// 004b8622  68e18a7c00           push 0x7c8ae1
// 004b8627  64a100000000         mov eax, dword ptr fs:[0]
// 004b862d  50                   push eax
// 004b862e  64892500000000       mov dword ptr fs:[0], esp
// 004b8635  83ec30               sub esp, 0x30
// 004b8638  56                   push esi
// 004b8639  8bf1                 mov esi, ecx
// 004b863b  8b4608               mov eax, dword ptr [esi + 8]
// 004b863e  8d4c2404             lea ecx, [esp + 4]
// 004b8642  51                   push ecx
// 004b8643  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8646  81c1902c0000         add ecx, 0x2c90
// 004b864c  89442408             mov dword ptr [esp + 8], eax
// 004b8650  e80b191300           call 0x5e9f60
// 004b8655  85c0                 test eax, eax
// 004b8657  0f8481010000         je 0x4b87de
// 004b865d  57                   push edi
// 004b865e  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004b8662  6a02                 push 2
// 004b8664  57                   push edi
// 004b8665  e8662fffff           call 0x4ab5d0
// 004b866a  8b4608               mov eax, dword ptr [esi + 8]
// 004b866d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8670  83c408               add esp, 8
// 004b8673  50                   push eax
// 004b8674  57                   push edi
// 004b8675  e86604ffff           call 0x4a8ae0
// 004b867a  e81162feff           call 0x49e890
// 004b867f  80b83101000000       cmp byte ptr [eax + 0x131], 0
// 004b8686  0f84e4000000         je 0x4b8770
// 004b868c  8b7e08               mov edi, dword ptr [esi + 8]
// 004b868f  53                   push ebx
// 004b8690  55                   push ebp
// 004b8691  8bcf                 mov ecx, edi
// 004b8693  8d6f10               lea ebp, [edi + 0x10]
// 004b8696  e80535feff           call 0x49bba0
// 004b869b  6a04                 push 4
// 004b869d  8d542428             lea edx, [esp + 0x28]
// 004b86a1  52                   push edx
// 004b86a2  8d4f08               lea ecx, [edi + 8]
// 004b86a5  e82627ffff           call 0x4aadd0
// 004b86aa  8bf8                 mov edi, eax
// 004b86ac  8d44241c             lea eax, [esp + 0x1c]
// 004b86b0  50                   push eax
// 004b86b1  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004b86b9  e8620f0b00           call 0x569620
// 004b86be  83c404               add esp, 4
// 004b86c1  8bd8                 mov ebx, eax
// 004b86c3  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 004b86c7  c644244801           mov byte ptr [esp + 0x48], 1
// 004b86cc  7209                 jb 0x4b86d7
// 004b86ce  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b86d1  894c2410             mov dword ptr [esp + 0x10], ecx
// 004b86d5  eb07                 jmp 0x4b86de
// 004b86d7  83c704               add edi, 4
// 004b86da  897c2410             mov dword ptr [esp + 0x10], edi
// 004b86de  8b5500               mov edx, dword ptr [ebp]
// 004b86e1  8b4204               mov eax, dword ptr [edx + 4]
// 004b86e4  8bcd                 mov ecx, ebp
// 004b86e6  ffd0                 call eax
// 004b86e8  83781c10             cmp dword ptr [eax + 0x1c], 0x10
// 004b86ec  7205                 jb 0x4b86f3
// 004b86ee  8b7808               mov edi, dword ptr [eax + 8]
// 004b86f1  eb03                 jmp 0x4b86f6
// 004b86f3  8d7808               lea edi, [eax + 8]
// 004b86f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b86f9  8b2b                 mov ebp, dword ptr [ebx]
// 004b86fb  6a01                 push 1
// 004b86fd  81c1542d0000         add ecx, 0x2d54
// 004b8703  e8a811ffff           call 0x4a98b0
// 004b8708  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b870c  50                   push eax
// 004b870d  51                   push ecx
// 004b870e  57                   push edi
// 004b870f  68ec518200           push 0x8251ec
// 004b8714  6a01                 push 1
// 004b8716  55                   push ebp
// 004b8717  e8840c0b00           call 0x5693a0
// 004b871c  8b442438             mov eax, dword ptr [esp + 0x38]
// 004b8720  83c418               add esp, 0x18
// 004b8723  5d                   pop ebp
// 004b8724  c644244400           mov byte ptr [esp + 0x44], 0
// 004b8729  5b                   pop ebx
// 004b872a  85c0                 test eax, eax
// 004b872c  742c                 je 0x4b875a
// 004b872e  8bf8                 mov edi, eax
// 004b8730  83c004               add eax, 4
// 004b8733  83caff               or edx, 0xffffffff
// 004b8736  f00fc110             lock xadd dword ptr [eax], edx
// 004b873a  751e                 jne 0x4b875a
// 004b873c  8b07                 mov eax, dword ptr [edi]
// 004b873e  8b5004               mov edx, dword ptr [eax + 4]
// 004b8741  8bcf                 mov ecx, edi
// 004b8743  ffd2                 call edx
// 004b8745  8d4708               lea eax, [edi + 8]
// 004b8748  83c9ff               or ecx, 0xffffffff
// 004b874b  f00fc108             lock xadd dword ptr [eax], ecx
// 004b874f  7509                 jne 0x4b875a
// 004b8751  8b17                 mov edx, dword ptr [edi]
// 004b8753  8b4208               mov eax, dword ptr [edx + 8]
// 004b8756  8bcf                 mov ecx, edi
// 004b8758  ffd0                 call eax
// 004b875a  8d4c241c             lea ecx, [esp + 0x1c]
// 004b875e  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 004b8766  ff1568248000         call dword ptr [0x802468]
// 004b876c  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004b8770  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b8773  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 004b8776  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b8779  52                   push edx
// 004b877a  57                   push edi
// 004b877b  81c1b02b0000         add ecx, 0x2bb0
// 004b8781  e81a64ffff           call 0x4aeba0
// 004b8786  8b4608               mov eax, dword ptr [esi + 8]
// 004b8789  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b878c  8b11                 mov edx, dword ptr [ecx]
// 004b878e  50                   push eax
// 004b878f  8b4250               mov eax, dword ptr [edx + 0x50]
// 004b8792  ffd0                 call eax
// 004b8794  88442448             mov byte ptr [esp + 0x48], al
// 004b8798  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004b879c  51                   push ecx
// 004b879d  57                   push edi
// 004b879e  e86dd3feff           call 0x4a5b10
// 004b87a3  8b5608               mov edx, dword ptr [esi + 8]
// 004b87a6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b87a9  83c408               add esp, 8
// 004b87ac  57                   push edi
// 004b87ad  52                   push edx
// 004b87ae  e86df7ffff           call 0x4b7f20
// 004b87b3  8b4608               mov eax, dword ptr [esi + 8]
// 004b87b6  85c0                 test eax, eax
// 004b87b8  7405                 je 0x4b87bf
// 004b87ba  83c014               add eax, 0x14
// 004b87bd  eb02                 jmp 0x4b87c1
// 004b87bf  33c0                 xor eax, eax
// 004b87c1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b87c4  57                   push edi
// 004b87c5  89442414             mov dword ptr [esp + 0x14], eax
// 004b87c9  6a00                 push 0
// 004b87cb  8d442414             lea eax, [esp + 0x14]
// 004b87cf  50                   push eax
// 004b87d0  c7442418343d9700     mov dword ptr [esp + 0x18], 0x973d34
// 004b87d8  e8b3e0ffff           call 0x4b6890
// 004b87dd  5f                   pop edi
// 004b87de  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b87e2  5e                   pop esi
// 004b87e3  64890d00000000       mov dword ptr fs:[0], ecx
// 004b87ea  83c43c               add esp, 0x3c
// 004b87ed  c20400               ret 4

// from server: 78% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
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



typedef std::string Text;

struct NamedText {
    unsigned prefix;
    std::string text;
    const char* c_str() const { return text.c_str(); }
};

struct NameInterface {
    virtual void unused();
    virtual NamedText* name();
};

struct Object {
    unsigned prefix[2];
    unsigned textPart[2];
    NameInterface namePart;
    unsigned callbackPart;
    unsigned unknown;
    unsigned identifier;
    void prepare();
};

struct TextPart {
    Text format(int);
};

typedef boost::shared_ptr<unsigned> Shared;

struct Lookup {
    int find(Object**);
};

struct IdentifierWriter {
    void write(void*, unsigned);
};

struct LabelProvider {
    const char* get(int);
};

struct Callback {
    const void* tag;
    void* object;
};

struct Owner {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual bool flag(Object*);
    void writeObject(void*, Object*);
    void finishObject(Object*, void*);
    void writeCallback(Callback*, int, void*);
};

struct Settings {
    char padding[0x131];
    bool logging;
};

extern Settings* __cdecl settings();
extern void __cdecl writeKind(void*, int);
extern Shared __cdecl acquire();
extern void __cdecl report(unsigned*, int, const char*, const char*, const char*, const char*);
extern void* __cdecl writeFlag(void*, bool);
extern const char message[];
extern const char callbackTag[];

struct Item {
    unsigned prefix;
    Owner* owner;
    Object* object;
    void write(void*);
};

void Item::write(void* stream)
{
    {
    Object* key = object;
    if (!reinterpret_cast<Lookup*>(
            reinterpret_cast<char*>(owner) + 0x2c90)->find(&key))
        return;
    }

    writeKind(stream, 2);
    Object* writtenObject = object;
    owner->writeObject(stream, writtenObject);

    if (settings()->logging) {
        Object* instance = object;
        NameInterface* names = &instance->namePart;
        instance->prepare();

        report(acquire().get(), 1, message, names->name()->c_str(),
            reinterpret_cast<TextPart*>(reinterpret_cast<char*>(instance)+8)->format(4).c_str(),
            reinterpret_cast<LabelProvider*>(reinterpret_cast<char*>(owner)+0x2d54)->get(1));
    }

    reinterpret_cast<IdentifierWriter*>(
        reinterpret_cast<char*>(owner) + 0x2bb0)->write(
            stream, object->identifier);

    Object* testedObject = object;
    bool enabled = owner->flag(testedObject);
    writeFlag(stream, enabled);
    owner->finishObject(object, stream);

    void* callbackObject = object
        ? reinterpret_cast<char*>(object) + 0x14
        : 0;

    Callback callback;
    callback.object = callbackObject;
    callback.tag = callbackTag;
    owner->writeCallback(&callback, 0, stream);
}
