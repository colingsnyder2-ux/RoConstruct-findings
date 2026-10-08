// from server: 62% by colin
// roc 2007-08 00560a80  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560a80
//
// 00560a80  8b442404             mov eax, dword ptr [esp + 4]
// 00560a84  56                   push esi
// 00560a85  50                   push eax
// 00560a86  83ec1c               sub esp, 0x1c
// 00560a89  8bf1                 mov esi, ecx
// 00560a8b  8bcc                 mov ecx, esp
// 00560a8d  89642428             mov dword ptr [esp + 0x28], esp
// 00560a91  6820197900           push 0x791920
// 00560a96  ff1598e67700         call dword ptr [0x77e698]
// 00560a9c  8bce                 mov ecx, esi
// 00560a9e  e8edfaffff           call 0x560590
// 00560aa3  c7060c957a00         mov dword ptr [esi], 0x7a950c
// 00560aa9  8bc6                 mov eax, esi
// 00560aab  5e                   pop esi
// 00560aac  c20400               ret 4

struct S {
    S* construct(char*);
};

extern "C" void __stdcall G1_func_00791920();
extern "C" void __stdcall G2_func_0077e698();
extern void G3_func_00560590();

S* S::construct(char* a)
{
    G1_func_00791920();
    G2_func_0077e698();
    G3_func_00560590();
    *(int*)this = 0x7a950c;
    return this;
}
