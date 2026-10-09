// from server: 53% by colin
// roc 2007-08 00468740  unit: VCWorkspace::?$CComObject  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00468740
//
// 00468740  894804               mov dword ptr [eax + 4], ecx
// 00468743  837dd800             cmp dword ptr [ebp - 0x28], 0
// 00468747  740b                 je 0x468754
// 00468749  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0046874c  52                   push edx
// 0046874d  6a00                 push 0
// 0046874f  e8e4771c00           call 0x62ff38
// 00468754  33c0                 xor eax, eax
// 00468756  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00468759  64890d00000000       mov dword ptr fs:[0], ecx
// 00468760  59                   pop ecx
// 00468761  5f                   pop edi
// 00468762  5e                   pop esi
// 00468763  5b                   pop ebx
// 00468764  8be5                 mov esp, ebp
// 00468766  5d                   pop ebp
// 00468767  c20800               ret 8
// 0046876a  682a010000           push 0x12a
// 0046876f  6858607900           push 0x796058
// 00468774  6803400080           push 0x80004003
// 00468779  6a01                 push 1
// 0046877b  e830f6fbff           call 0x427db0
// 00468780  83c410               add esp, 0x10
// 00468783  6870027900           push 0x790270
// 00468788  6803400080           push 0x80004003
// 0046878d  e87ee8ffff           call 0x467010

struct VCWorkspace_CComObject
{
    void __stdcall sub_468740(int, int);
};

extern "C" void __stdcall sub_62FF38(void*, int);
extern "C" void __stdcall sub_427DB0(int, unsigned int, unsigned int, int);
extern "C" void __stdcall sub_467010(unsigned int, unsigned int);

void VCWorkspace_CComObject::sub_468740(int a1, int a2)
{
    *(int*)(a1 + 4) = (int)this;
    if (*(int*)((char*)this - 0x28) != 0)
    {
        sub_62FF38(*(void**)((char*)this - 0x2c), 0);
    }
    sub_427DB0(1, 0x80004003, 0x796058, 0x12a);
    sub_467010(0x790270, 0x80004003);
}
