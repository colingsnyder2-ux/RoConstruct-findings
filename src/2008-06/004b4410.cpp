// from server: 78% by colin
// from server: 75% by king_originala
// roc 2008-06 004b4410  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4410
//
// 004b4410  6aff                 push -1
// 004b4412  686ea87c00           push 0x7ca86e
// 004b4417  64a100000000         mov eax, dword ptr fs:[0]
// 004b441d  50                   push eax
// 004b441e  64892500000000       mov dword ptr fs:[0], esp
// 004b4425  51                   push ecx
// 004b4426  53                   push ebx
// 004b4427  56                   push esi
// 004b4428  8bf1                 mov esi, ecx
// 004b442a  c70600000000         mov dword ptr [esi], 0
// 004b4430  89742408             mov dword ptr [esp + 8], esi
// 004b4434  c7460400000000       mov dword ptr [esi + 4], 0
// 004b443b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b443f  8b1a                 mov ebx, dword ptr [edx]
// 004b4441  6a00                 push 0
// 004b4443  83ec10               sub esp, 0x10
// 004b4446  8bc4                 mov eax, esp
// 004b4448  8918                 mov dword ptr [eax], ebx
// 004b444a  8b5a04               mov ebx, dword ptr [edx + 4]
// 004b444d  895804               mov dword ptr [eax + 4], ebx
// 004b4450  8b5a08               mov ebx, dword ptr [edx + 8]
// 004b4453  8b520c               mov edx, dword ptr [edx + 0xc]
// 004b4456  895808               mov dword ptr [eax + 8], ebx
// 004b4459  8d4e08               lea ecx, [esi + 8]
// 004b445c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b4464  89500c               mov dword ptr [eax + 0xc], edx
// 004b4467  e864b5ffff           call 0x4af9d0
// 004b446c  b301                 mov bl, 1
// 004b446e  6a28                 push 0x28
// 004b4470  885c2418             mov byte ptr [esp + 0x18], bl
// 004b4474  e8a7c41e00           call 0x6a0920
// 004b4479  83c404               add esp, 4
// 004b447c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b4480  c644241402           mov byte ptr [esp + 0x14], 2
// 004b4485  85c0                 test eax, eax
// 004b4487  7409                 je 0x4b4492
// 004b4489  8bc8                 mov ecx, eax
// 004b448b  e8b068f6ff           call 0x41ad40
// 004b4490  eb02                 jmp 0x4b4494
// 004b4492  33c0                 xor eax, eax
// 004b4494  50                   push eax
// 004b4495  8bce                 mov ecx, esi
// 004b4497  885c2418             mov byte ptr [esp + 0x18], bl
// 004b449b  e8506cf6ff           call 0x41b0f0
// 004b44a0  8bce                 mov ecx, esi
// 004b44a2  e899130e00           call 0x595840
// 004b44a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b44ab  8bc6                 mov eax, esi
// 004b44ad  5e                   pop esi
// 004b44ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004b44b5  5b                   pop ebx
// 004b44b6  83c410               add esp, 0x10
// 004b44b9  c20400               ret 4

typedef unsigned long DWORD;

struct Data {
    DWORD a, b, c, d;
};

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Object {
    unsigned char storage[40];
    Object();
};

struct __declspec(dllimport) Control {
    void *pointer;

    Control();
    ~Control();
};

struct Base {
    Object *object;
    Control control;

    Base();
    void reset(Object *);
};

inline Base::Base() : object(0), control()
{
}

struct Function {
    const void *type;
    DWORD unused;
    Data data;

    Function(Data, DWORD);
    ~Function();
};

struct S : Base {
    Function function;

    S(const Data &);
    void finish();
};

S::S(const Data &data)
    : function(data, 0)
{
    reset(new Object);
    finish();
}
