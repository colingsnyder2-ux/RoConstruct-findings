// from server: 30% by colin
// roc 2007-08 004330b0  unit: RBX::VHat::?$FactoryProduct::Creator  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004330b0
//
// 004330b0  55                   push ebp
// 004330b1  8bec                 mov ebp, esp
// 004330b3  6afe                 push -2
// 004330b5  68404e8400           push 0x844e40
// 004330ba  68760a6300           push 0x630a76
// 004330bf  64a100000000         mov eax, dword ptr fs:[0]
// 004330c5  50                   push eax
// 004330c6  83ec08               sub esp, 8
// 004330c9  53                   push ebx
// 004330ca  56                   push esi
// 004330cb  57                   push edi
// 004330cc  a188518b00           mov eax, dword ptr [0x8b5188]
// 004330d1  3145f8               xor dword ptr [ebp - 8], eax
// 004330d4  33c5                 xor eax, ebp
// 004330d6  50                   push eax
// 004330d7  8d45f0               lea eax, [ebp - 0x10]
// 004330da  64a300000000         mov dword ptr fs:[0], eax
// 004330e0  8965e8               mov dword ptr [ebp - 0x18], esp
// 004330e3  8bf1                 mov esi, ecx
// 004330e5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004330ec  56                   push esi
// 004330ed  ff1508d37700         call dword ptr [0x77d308]
// 004330f3  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 004330fa  8bc6                 mov eax, esi
// 004330fc  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004330ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00433106  59                   pop ecx
// 00433107  5f                   pop edi
// 00433108  5e                   pop esi
// 00433109  5b                   pop ebx
// 0043310a  8be5                 mov esp, ebp
// 0043310c  5d                   pop ebp
// 0043310d  c3                   ret 

struct ICreator {
    virtual ~ICreator();
};

struct Creator : ICreator {
    Creator();
};

extern "C" void __stdcall InitializeCriticalSection(void*);

Creator::Creator() {
    InitializeCriticalSection(this);
}
