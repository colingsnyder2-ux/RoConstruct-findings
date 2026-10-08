// from server: 78% by colin
// roc 2007-08 0044a580  unit: CRobloxModule  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a580
//
// 0044a580  8b442408             mov eax, dword ptr [esp + 8]
// 0044a584  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044a588  50                   push eax
// 0044a589  51                   push ecx
// 0044a58a  68c0988c00           push 0x8c98c0
// 0044a58f  e80cfbffff           call 0x44a0a0
// 0044a594  85c0                 test eax, eax
// 0044a596  7c16                 jl 0x44a5ae
// 0044a598  8b0d9cbe8b00         mov ecx, dword ptr [0x8bbe9c]
// 0044a59e  85c9                 test ecx, ecx
// 0044a5a0  740c                 je 0x44a5ae
// 0044a5a2  8b1528988c00         mov edx, dword ptr [0x8c9828]
// 0044a5a8  52                   push edx
// 0044a5a9  ffd1                 call ecx
// 0044a5ab  83c404               add esp, 4
// 0044a5ae  c20800               ret 8

extern int G_008bbe9c;
extern int G_008c9828;
extern int G_008c98c0;

extern "C" int __cdecl sub_44A0A0(int, int, int);

void __stdcall func_0044a580(int a1, int a2)
{
    if (sub_44A0A0(a1, a2, (int)&G_008c98c0) >= 0) {
        int (*fn)(int) = (int (*)(int))G_008bbe9c;
        if (fn == 0) {
            fn(G_008c9828);
        }
    }
}
