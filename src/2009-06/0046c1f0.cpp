// roc 2009-06 0046c1f0  unit: DxUserInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c1f0
//
// 0046c1f0  d9ee                 fldz 
// 0046c1f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046c1f6  8b542408             mov edx, dword ptr [esp + 8]
// 0046c1fa  51                   push ecx
// 0046c1fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046c1ff  d91c24               fstp dword ptr [esp]
// 0046c202  6a06                 push 6
// 0046c204  50                   push eax
// 0046c205  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046c209  51                   push ecx
// 0046c20a  52                   push edx
// 0046c20b  50                   push eax
// 0046c20c  e8effeffff           call 0x46c100
// 0046c211  83c418               add esp, 0x18
// 0046c214  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAXHHHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void __cdecl helper(int, int, int, int, int, float);

void __cdecl func_0046a100(int a, int b, int c, int d)
{
    helper(a, b, c, d, 6, 0.0f);
}