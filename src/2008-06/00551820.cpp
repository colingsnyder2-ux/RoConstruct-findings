// roc 2008-06 00551820  unit: seg_00550000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551820
//
// roc-flags: /O2 /GS /EHsc /MD /Oy-
// 00551820  55                   push ebp
// 00551821  8bec                 mov ebp, esp
// 00551823  6aff                 push -1
// 00551825  68d7d77c00           push 0x7cd7d7
// 0055182a  64a100000000         mov eax, dword ptr fs:[0]
// 00551830  50                   push eax
// 00551831  83ec28               sub esp, 0x28
// 00551834  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00551839  33c5                 xor eax, ebp
// 0055183b  50                   push eax
// 0055183c  8d45f4               lea eax, [ebp - 0xc]
// 0055183f  64a300000000         mov dword ptr fs:[0], eax
// 00551845  833dc42e940000       cmp dword ptr [0x942ec4], 0
// 0055184c  7545                 jne 0x551893
// 0055184e  6890050000           push 0x590
// 00551853  e8c8f01400           call 0x6a0920
// 00551858  83c404               add esp, 4
// 0055185b  8945ec               mov dword ptr [ebp - 0x14], eax
// 0055185e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00551865  837dec00             cmp dword ptr [ebp - 0x14], 0
// 00551869  740d                 je 0x551878
// 0055186b  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0055186e  e8cd952500           call 0x7aae40
// 00551873  8945d0               mov dword ptr [ebp - 0x30], eax
// 00551876  eb07                 jmp 0x55187f
// 00551878  c745d000000000       mov dword ptr [ebp - 0x30], 0
// 0055187f  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 00551882  8945f0               mov dword ptr [ebp - 0x10], eax
// 00551885  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0055188c  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 0055188f  eb72                 jmp 0x551903
// 00551891  eb70                 jmp 0x551903
// 00551893  833dc42e940001       cmp dword ptr [0x942ec4], 1
// 0055189a  7545                 jne 0x5518e1
// 0055189c  6800050000           push 0x500
// 005518a1  e87af01400           call 0x6a0920
// 005518a6  83c404               add esp, 4
// 005518a9  8945e4               mov dword ptr [ebp - 0x1c], eax
// 005518ac  c745fc01000000       mov dword ptr [ebp - 4], 1
// 005518b3  837de400             cmp dword ptr [ebp - 0x1c], 0
// 005518b7  740d                 je 0x5518c6
// 005518b9  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005518bc  e87f37fbff           call 0x505040
// 005518c1  8945cc               mov dword ptr [ebp - 0x34], eax
// 005518c4  eb07                 jmp 0x5518cd
// 005518c6  c745cc00000000       mov dword ptr [ebp - 0x34], 0
// 005518cd  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 005518d0  894de8               mov dword ptr [ebp - 0x18], ecx
// 005518d3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005518da  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005518dd  eb24                 jmp 0x551903
// 005518df  eb22                 jmp 0x551903
// 005518e1  c745d470d08200       mov dword ptr [ebp - 0x2c], 0x82d070
// 005518e8  8d55d4               lea edx, [ebp - 0x2c]
// 005518eb  52                   push edx
// 005518ec  8d4dd8               lea ecx, [ebp - 0x28]
// 005518ef  ff15a4288000         call dword ptr [0x8028a4]
// 005518f5  687c998d00           push 0x8d997c
// 005518fa  8d45d8               lea eax, [ebp - 0x28]
// 005518fd  50                   push eax
// 005518fe  e889fc1400           call 0x6a158c
// 00551903  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00551906  64890d00000000       mov dword ptr fs:[0], ecx
// 0055190d  59                   pop ecx
// 0055190e  8be5                 mov esp, ebp
// 00551910  5d                   pop ebp
// 00551911  c3                   ret 

extern volatile int factoryType;

struct First {
    char data[0x590];
    First();
};
struct Second {
    char data[0x500];
    Second();
};
struct Error {
    char data[12];
    __declspec(dllimport) Error(const char* const&);
};

void* __cdecl createFactory()
{
    void* volatile result;
    if (factoryType == 0)
        result = new First;
    else if (factoryType == 1)
        result = new Second;
    else {
        const char* message = "Invalid factory type";
        throw Error(message);
    }
    return result;
}
