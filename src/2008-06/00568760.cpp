// from server: 100% by coldek
// roc 2008-06 00568760  unit: RBX::VInstance::?$NonFactoryProduct  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568760
//
// 00568760  55                   push ebp
// 00568761  8d6c24b0             lea ebp, [esp - 0x50]
// 00568765  83ec50               sub esp, 0x50
// 00568768  6aff                 push -1
// 0056876a  68bdf67c00           push 0x7cf6bd
// 0056876f  64a100000000         mov eax, dword ptr fs:[0]
// 00568775  50                   push eax
// 00568776  64892500000000       mov dword ptr fs:[0], esp
// 0056877d  81ecd8000000         sub esp, 0xd8
// 00568783  53                   push ebx
// 00568784  56                   push esi
// 00568785  57                   push edi
// 00568786  8d4524               lea eax, [ebp + 0x24]
// 00568789  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056878c  50                   push eax
// 0056878d  894d40               mov dword ptr [ebp + 0x40], ecx
// 00568790  e8cbfcffff           call 0x568460
// 00568795  83c404               add esp, 4
// 00568798  837d3800             cmp dword ptr [ebp + 0x38], 0
// 0056879c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005687a3  0f84f8000000         je 0x5688a1
// 005687a9  837d3c10             cmp dword ptr [ebp + 0x3c], 0x10
// 005687ad  8b4528               mov eax, dword ptr [ebp + 0x28]
// 005687b0  c645fc01             mov byte ptr [ebp - 4], 1
// 005687b4  7303                 jae 0x5687b9
// 005687b6  8d4528               lea eax, [ebp + 0x28]
// 005687b9  6a01                 push 1
// 005687bb  6a40                 push 0x40
// 005687bd  6a21                 push 0x21
// 005687bf  50                   push eax
// 005687c0  8d8d1cffffff         lea ecx, [ebp - 0xe4]
// 005687c6  ff1504248000         call dword ptr [0x802404]
// 005687cc  8d8d24ffffff         lea ecx, [ebp - 0xdc]
// 005687d2  51                   push ecx
// 005687d3  8d4da8               lea ecx, [ebp - 0x58]
// 005687d6  c645fc02             mov byte ptr [ebp - 4], 2
// 005687da  e871cbeaff           call 0x415350
// 005687df  8d5544               lea edx, [ebp + 0x44]
// 005687e2  52                   push edx
// 005687e3  8d4da8               lea ecx, [ebp - 0x58]
// 005687e6  c645fc03             mov byte ptr [ebp - 4], 3
// 005687ea  e8d16e0200           call 0x58f6c0
// 005687ef  8b30                 mov esi, dword ptr [eax]
// 005687f1  c70000000000         mov dword ptr [eax], 0
// 005687f7  89751c               mov dword ptr [ebp + 0x1c], esi
// 005687fa  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 005687fd  c645fc04             mov byte ptr [ebp - 4], 4
// 00568801  85c9                 test ecx, ecx
// 00568803  7410                 je 0x568815
// 00568805  8bf9                 mov edi, ecx
// 00568807  e864b2eaff           call 0x413a70
// 0056880c  57                   push edi
// 0056880d  e8687e1300           call 0x6a067a
// 00568812  83c404               add esp, 4
// 00568815  b9a04a9700           mov ecx, 0x974aa0
// 0056881a  c74548a04a9700       mov dword ptr [ebp + 0x48], 0x974aa0
// 00568821  c6454c00             mov byte ptr [ebp + 0x4c], 0
// 00568825  e866a8ffff           call 0x563090
// 0056882a  c6454c01             mov byte ptr [ebp + 0x4c], 1
// 0056882e  b305                 mov bl, 5
// 00568830  8d4d00               lea ecx, [ebp]
// 00568833  885dfc               mov byte ptr [ebp - 4], bl
// 00568836  e815b6edff           call 0x443e50
// 0056883b  8b4d40               mov ecx, dword ptr [ebp + 0x40]
// 0056883e  8d4500               lea eax, [ebp]
// 00568841  50                   push eax
// 00568842  56                   push esi
// 00568843  c645fc06             mov byte ptr [ebp - 4], 6
// 00568847  e8542effff           call 0x55b6a0
// 0056884c  8d4d00               lea ecx, [ebp]
// 0056884f  e80cb5edff           call 0x443d60
// 00568854  8d4d04               lea ecx, [ebp + 4]
// 00568857  885dfc               mov byte ptr [ebp - 4], bl
// 0056885a  e891b4edff           call 0x443cf0
// 0056885f  b9a04a9700           mov ecx, 0x974aa0
// 00568864  c645fc04             mov byte ptr [ebp - 4], 4
// 00568868  e873a8ffff           call 0x5630e0
// 0056886d  c645fc03             mov byte ptr [ebp - 4], 3
// 00568871  85f6                 test esi, esi
// 00568873  7410                 je 0x568885
// 00568875  8bce                 mov ecx, esi
// 00568877  e8f4b1eaff           call 0x413a70
// 0056887c  56                   push esi
// 0056887d  e8f87d1300           call 0x6a067a
// 00568882  83c404               add esp, 4
// 00568885  8d4da8               lea ecx, [ebp - 0x58]
// 00568888  c645fc02             mov byte ptr [ebp - 4], 2
// 0056888c  e82fbfeaff           call 0x4147c0
// 00568891  8d8d1cffffff         lea ecx, [ebp - 0xe4]
// 00568897  c645fc01             mov byte ptr [ebp - 4], 1
// 0056889b  ff1508248000         call dword ptr [0x802408]
// 005688a1  8d4d24               lea ecx, [ebp + 0x24]
// 005688a4  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005688ab  ff1568248000         call dword ptr [0x802468]
// 005688b1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005688b4  5f                   pop edi
// 005688b5  5e                   pop esi
// 005688b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005688bd  5b                   pop ebx
// 005688be  83c550               add ebp, 0x50
// 005688c1  8be5                 mov esp, ebp
// 005688c3  5d                   pop ebp
// 005688c4  c3                   ret 
// 005688c5  8d4d48               lea ecx, [ebp + 0x48]
// 005688c8  51                   push ecx
// 005688c9  e8520d0000           call 0x569620
// 005688ce  83c404               add esp, 4
// 005688d1  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 005688d4  8b11                 mov edx, dword ptr [ecx]
// 005688d6  8b30                 mov esi, dword ptr [eax]
// 005688d8  8b4204               mov eax, dword ptr [edx + 4]
// 005688db  c645fc08             mov byte ptr [ebp - 4], 8
// 005688df  ffd0                 call eax
// 005688e1  50                   push eax
// 005688e2  6838f08200           push 0x82f038
// 005688e7  6a01                 push 1
// 005688e9  56                   push esi
// 005688ea  e8b10a0000           call 0x5693a0
// 005688ef  83c410               add esp, 0x10
// 005688f2  8d4d48               lea ecx, [ebp + 0x48]
// 005688f5  c645fc07             mov byte ptr [ebp - 4], 7
// 005688f9  e8627d0900           call 0x600660
// 005688fe  b8a1885600           mov eax, 0x5688a1
// 00568903  c3                   ret 

// from server: 100% by nuck16
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// GlobalSettings::loadState analog (2008-06 00568760): the catch funclet prints
// "Exception thrown in loadState %s" through StandardOut::singleton() (MESSAGE_INFO=1);
// the early return on an empty path (instead of if/try nesting) gives the target's frame layout.
#include <exception>
#include <string>
#include <memory>
#include <fstream>

enum MessageType { MESSAGE_OUTPUT, MESSAGE_INFO, MESSAGE_WARNING, MESSAGE_ERROR };
struct StandardOut;
struct StandardOutPtr {
    StandardOut* px;
    void* pn;
    ~StandardOutPtr();
    StandardOut* operator->() const { return px; }
};
struct StandardOut {
    static StandardOutPtr singleton();
    void __cdecl print(MessageType, const char*, ...);
};

std::string __cdecl getSourceName();

struct Product {
    ~Product();
};

struct Parser {
    char storage[72];
    explicit Parser(std::streambuf*);
    ~Parser();
    std::auto_ptr<Product> read();
};

struct Mutex {
    void lock();
    void unlock();
};

extern Mutex productMutex;

struct Lock {
    Mutex *mutex;
    bool acquired;
    explicit Lock(Mutex &);
    ~Lock();
};

__forceinline Lock::Lock(Mutex &m)
    : mutex(&m), acquired(false) {
    mutex->lock();
    acquired = true;
}

__forceinline Lock::~Lock() {
    if (acquired)
        mutex->unlock();
}

struct TokenData {
    char storage[24];
    ~TokenData();
};

struct Token {
    unsigned int tag;
    TokenData data;
    Token();
    void finish();
    ~Token();
};

__forceinline Token::~Token() {}

struct S {
    void load();
    void apply(Product *, Token *);
};

void S::load() {
    std::string name = getSourceName();
    if (name.empty())
        return;
    try {
        std::ifstream stream(name.c_str(), std::ios_base::in | std::ios_base::binary, 0x40);
        Parser parser(stream.rdbuf());
        std::auto_ptr<Product> product(parser.read());
        Lock lock(productMutex);
        Token token;
        apply(product.get(), &token);
        token.finish();
    } catch (std::exception& e) {
        StandardOut::singleton()->print(MESSAGE_INFO, "Exception thrown in loadState %s", e.what());
    }
}
