// from server: 100% by king_originala
// roc 2008-06 005cb9e0  unit: RBX::AIFleeController  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb9e0
//
// 005cb9e0  6aff                 push -1
// 005cb9e2  68b2537d00           push 0x7d53b2
// 005cb9e7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb9ed  50                   push eax
// 005cb9ee  64892500000000       mov dword ptr fs:[0], esp
// 005cb9f5  51                   push ecx
// 005cb9f6  56                   push esi
// 005cb9f7  8bf1                 mov esi, ecx
// 005cb9f9  57                   push edi
// 005cb9fa  89742408             mov dword ptr [esp + 8], esi
// 005cb9fe  e87dfeffff           call 0x5cb880
// 005cba03  33ff                 xor edi, edi
// 005cba05  c706bca28300         mov dword ptr [esi], 0x83a2bc
// 005cba0b  c74610b0a28300       mov dword ptr [esi + 0x10], 0x83a2b0
// 005cba12  c74614a8a28300       mov dword ptr [esi + 0x14], 0x83a2a8
// 005cba19  c74620a0a28300       mov dword ptr [esi + 0x20], 0x83a2a0
// 005cba20  c7462490a28300       mov dword ptr [esi + 0x24], 0x83a290
// 005cba27  c7464480a28300       mov dword ptr [esi + 0x44], 0x83a280
// 005cba2e  c7466470a28300       mov dword ptr [esi + 0x64], 0x83a270
// 005cba35  c7868400000060a28300 mov dword ptr [esi + 0x84], 0x83a260
// 005cba3f  c786a400000050a28300 mov dword ptr [esi + 0xa4], 0x83a250
// 005cba49  c786c400000040a28300 mov dword ptr [esi + 0xc4], 0x83a240
// 005cba53  89be30010000         mov dword ptr [esi + 0x130], edi
// 005cba59  897c2414             mov dword ptr [esp + 0x14], edi
// 005cba5d  89be34010000         mov dword ptr [esi + 0x134], edi
// 005cba63  6a10                 push 0x10
// 005cba65  c644241801           mov byte ptr [esp + 0x18], 1
// 005cba6a  e8b14e0d00           call 0x6a0920
// 005cba6f  83c404               add esp, 4
// 005cba72  3bc7                 cmp eax, edi
// 005cba74  7417                 je 0x5cba8d
// 005cba76  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 005cba7c  897804               mov dword ptr [eax + 4], edi
// 005cba7f  897808               mov dword ptr [eax + 8], edi
// 005cba82  89700c               mov dword ptr [eax + 0xc], esi
// 005cba85  c700a49f8300         mov dword ptr [eax], 0x839fa4
// 005cba8b  eb02                 jmp 0x5cba8f
// 005cba8d  33c0                 xor eax, eax
// 005cba8f  8d8e38010000         lea ecx, [esi + 0x138]
// 005cba95  50                   push eax
// 005cba96  8939                 mov dword ptr [ecx], edi
// 005cba98  e803d5fcff           call 0x598fa0
// 005cba9d  6a10                 push 0x10
// 005cba9f  c644241802           mov byte ptr [esp + 0x18], 2
// 005cbaa4  e8774e0d00           call 0x6a0920
// 005cbaa9  83c404               add esp, 4
// 005cbaac  3bc7                 cmp eax, edi
// 005cbaae  7417                 je 0x5cbac7
// 005cbab0  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 005cbab6  897804               mov dword ptr [eax + 4], edi
// 005cbab9  897808               mov dword ptr [eax + 8], edi
// 005cbabc  89700c               mov dword ptr [eax + 0xc], esi
// 005cbabf  c700bc9f8300         mov dword ptr [eax], 0x839fbc
// 005cbac5  eb02                 jmp 0x5cbac9
// 005cbac7  33c0                 xor eax, eax
// 005cbac9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 005cbacf  50                   push eax
// 005cbad0  8939                 mov dword ptr [ecx], edi
// 005cbad2  e8c9d4fcff           call 0x598fa0
// 005cbad7  6a0c                 push 0xc
// 005cbad9  c644241803           mov byte ptr [esp + 0x18], 3
// 005cbade  e83d4e0d00           call 0x6a0920
// 005cbae3  83c404               add esp, 4
// 005cbae6  3bc7                 cmp eax, edi
// 005cbae8  7414                 je 0x5cbafe
// 005cbaea  c700e0e18100         mov dword ptr [eax], 0x81e1e0
// 005cbaf0  897804               mov dword ptr [eax + 4], edi
// 005cbaf3  897808               mov dword ptr [eax + 8], edi
// 005cbaf6  c700042a8300         mov dword ptr [eax], 0x832a04
// 005cbafc  eb02                 jmp 0x5cbb00
// 005cbafe  33c0                 xor eax, eax
// 005cbb00  8d8e40010000         lea ecx, [esi + 0x140]
// 005cbb06  50                   push eax
// 005cbb07  8939                 mov dword ptr [ecx], edi
// 005cbb09  e892d4fcff           call 0x598fa0
// 005cbb0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cbb12  5f                   pop edi
// 005cbb13  8bc6                 mov eax, esi
// 005cbb15  5e                   pop esi
// 005cbb16  64890d00000000       mov dword ptr fs:[0], ecx
// 005cbb1d  83c410               add esp, 0x10
// 005cbb20  c3                   ret 

void* __cdecl operator new(unsigned int);

extern char table_83a2bc[];
extern char table_83a2b0[];
extern char table_83a2a8[];
extern char table_83a2a0[];
extern char table_83a290[];
extern char table_83a280[];
extern char table_83a270[];
extern char table_83a260[];
extern char table_83a250[];
extern char table_83a240[];
extern char table_81e1e0[];
extern char table_839fa4[];
extern char table_839fbc[];
extern char table_832a04[];

struct Base {
    unsigned char data[0x130];
    Base();
    ~Base();
};

struct Layer : Base {
    unsigned int first;
    Layer();
    ~Layer();
};

__forceinline Layer::Layer() : Base() {
    *(void**)(data + 0x00) = table_83a2bc;
    *(void**)(data + 0x10) = table_83a2b0;
    *(void**)(data + 0x14) = table_83a2a8;
    *(void**)(data + 0x20) = table_83a2a0;
    *(void**)(data + 0x24) = table_83a290;
    *(void**)(data + 0x44) = table_83a280;
    *(void**)(data + 0x64) = table_83a270;
    *(void**)(data + 0x84) = table_83a260;
    *(void**)(data + 0xa4) = table_83a250;
    *(void**)(data + 0xc4) = table_83a240;
    first = 0;
}

struct Pair {
    unsigned int second;
    Pair();
    ~Pair();
};

inline Pair::Pair() : second(0) {}

struct Reference {
    void* pointer;
    Reference(void*);
    ~Reference();
    void reset(void*);
};

inline Reference::Reference(void* p) : pointer(0) {
    reset(p);
}

struct Controller;

struct CallbackA {
    void* volatile table;
    unsigned int first;
    unsigned int second;
    Controller* owner;
    CallbackA(Controller*);
};

inline CallbackA::CallbackA(Controller* p)
    : table(table_81e1e0), first(0), second(0), owner(p) {
    table = table_839fa4;
}

struct CallbackB {
    void* volatile table;
    unsigned int first;
    unsigned int second;
    Controller* owner;
    CallbackB(Controller*);
};

inline CallbackB::CallbackB(Controller* p)
    : table(table_81e1e0), first(0), second(0), owner(p) {
    table = table_839fbc;
}

struct CallbackC {
    void* volatile table;
    unsigned int first;
    unsigned int second;
    CallbackC();
};

inline CallbackC::CallbackC()
    : table(table_81e1e0), first(0), second(0) {
    table = table_832a04;
}

struct Controller : Layer {
    Pair pair;
    Reference a;
    Reference b;
    Reference c;
    Controller();
};

Controller::Controller()
    : Layer(),
      pair(),
      a(new CallbackA(this)),
      b(new CallbackB(this)),
      c(new CallbackC)
{
}
