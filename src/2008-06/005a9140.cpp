// from server: 100% by king_originala
// roc 2008-06 005a9140  unit: RBX::VScriptContext::?$FactoryProduct  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9140
//
// 005a9140  64a100000000         mov eax, dword ptr fs:[0]
// 005a9146  6aff                 push -1
// 005a9148  6801317d00           push 0x7d3101
// 005a914d  50                   push eax
// 005a914e  64892500000000       mov dword ptr fs:[0], esp
// 005a9155  83ec6c               sub esp, 0x6c
// 005a9158  56                   push esi
// 005a9159  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 005a9160  56                   push esi
// 005a9161  e8aa8a0600           call 0x611c10
// 005a9166  83c404               add esp, 4
// 005a9169  83f802               cmp eax, 2
// 005a916c  7d34                 jge 0x5a91a2
// 005a916e  6854448300           push 0x834454
// 005a9173  8d4c2410             lea ecx, [esp + 0x10]
// 005a9177  ff1558248000         call dword ptr [0x802458]
// 005a917d  8d44240c             lea eax, [esp + 0xc]
// 005a9181  50                   push eax
// 005a9182  8d4c244c             lea ecx, [esp + 0x4c]
// 005a9186  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 005a918e  e8bd0be6ff           call 0x409d50
// 005a9193  68c81b8d00           push 0x8d1bc8
// 005a9198  8d4c244c             lea ecx, [esp + 0x4c]
// 005a919c  51                   push ecx
// 005a919d  e8ea830f00           call 0x6a158c
// 005a91a2  53                   push ebx
// 005a91a3  57                   push edi
// 005a91a4  6a01                 push 1
// 005a91a6  56                   push esi
// 005a91a7  e8b48d0600           call 0x611f60
// 005a91ac  dd5c2414             fstp qword ptr [esp + 0x14]
// 005a91b0  56                   push esi
// 005a91b1  e8aa9d0600           call 0x612f60
// 005a91b6  83c40c               add esp, 0xc
// 005a91b9  50                   push eax
// 005a91ba  8d4c2434             lea ecx, [esp + 0x34]
// 005a91be  e87dacfeff           call 0x593e40
// 005a91c3  6a02                 push 2
// 005a91c5  56                   push esi
// 005a91c6  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 005a91d1  e8fa8b0600           call 0x611dd0
// 005a91d6  8b542450             mov edx, dword ptr [esp + 0x50]
// 005a91da  6a01                 push 1
// 005a91dc  52                   push edx
// 005a91dd  56                   push esi
// 005a91de  e8bd890600           call 0x611ba0
// 005a91e3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005a91e7  6a43                 push 0x43
// 005a91e9  56                   push esi
// 005a91ea  e821920600           call 0x612410
// 005a91ef  68eed8ffff           push 0xffffd8ee
// 005a91f4  56                   push esi
// 005a91f5  e866920600           call 0x612460
// 005a91fa  6aff                 push -1
// 005a91fc  56                   push esi
// 005a91fd  e81e8f0600           call 0x612120
// 005a9202  6afe                 push -2
// 005a9204  56                   push esi
// 005a9205  8bd8                 mov ebx, eax
// 005a9207  e8148a0600           call 0x611c20
// 005a920c  dd442440             fld qword ptr [esp + 0x40]
// 005a9210  8b8ba8010000         mov ecx, dword ptr [ebx + 0x1a8]
// 005a9216  dd5c242c             fstp qword ptr [esp + 0x2c]
// 005a921a  83c42c               add esp, 0x2c
// 005a921d  57                   push edi
// 005a921e  e8bd820700           call 0x6214e0
// 005a9223  6afe                 push -2
// 005a9225  56                   push esi
// 005a9226  e8f5890600           call 0x611c20
// 005a922b  83c408               add esp, 8
// 005a922e  8d4c2430             lea ecx, [esp + 0x30]
// 005a9232  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 005a923d  e83eb1feff           call 0x594380
// 005a9242  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 005a9246  5f                   pop edi
// 005a9247  5b                   pop ebx
// 005a9248  33c0                 xor eax, eax
// 005a924a  5e                   pop esi
// 005a924b  64890d00000000       mov dword ptr fs:[0], ecx
// 005a9252  83c478               add esp, 0x78
// 005a9255  c3                   ret 

typedef void (__thiscall *StringConstructor)(void*, const char*);
extern StringConstructor constructString;

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    char storage[28];
public:
    basic_string(const T*);
    ~basic_string();
};

template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
{
    constructString(this, text);
}

typedef basic_string<char, char_traits<char>, allocator<char> > string;

class exception {
    char* message;
    int ownsMessage;
public:
    virtual ~exception();
};

class runtime_error : public exception {
    string message;
public:
    runtime_error(const string&);
    virtual ~runtime_error();
};
}

struct State;

struct ThreadRef {
    char storage[24];
    State* thread;
    unsigned int tail;

    ThreadRef(State*);
    ~ThreadRef();
};

struct Scheduler {
    void delay(State*, double);
};

struct Context {
    char storage[0x1a8];
    Scheduler* scheduler;
};

extern "C" {
int __cdecl gettop(State*);
double __cdecl tonumber(State*, int);
State* __cdecl newthread(State*);
void __cdecl pushvalue(State*, int);
void __cdecl xmove(State*, State*, int);
void __cdecl pushinteger(State*, int);
void __cdecl gettable(State*, int);
Context* __cdecl touserdata(State*, int);
void __cdecl settop(State*, int);
}

int __cdecl delayFunction(State* state)
{
    if (gettop(state) < 2)
        throw std::runtime_error(
            std::string("delay function requires 2 arguments"));

    double seconds = tonumber(state, 1);
    ThreadRef reference(newthread(state));
    pushvalue(state, 2);
    xmove(state, reference.thread, 1);
    State* thread = reference.thread;
    pushinteger(state, 67);
    gettable(state, -10002);
    Context* context = touserdata(state, -1);
    settop(state, -2);
    context->scheduler->delay(thread, seconds);
    settop(state, -2);
    return 0;
}
