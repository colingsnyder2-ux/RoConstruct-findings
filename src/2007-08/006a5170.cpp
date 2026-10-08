// from server: 76% by colin
// roc 2007-08 006a5170  unit: CXTPShortcutManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5170
//
// 006a5170  51                   push ecx
// 006a5171  8d442408             lea eax, [esp + 8]
// 006a5175  50                   push eax
// 006a5176  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a517a  8d542404             lea edx, [esp + 4]
// 006a517e  52                   push edx
// 006a517f  50                   push eax
// 006a5180  e84b300300           call 0x6d81d0
// 006a5185  85c0                 test eax, eax
// 006a5187  7504                 jne 0x6a518d
// 006a5189  59                   pop ecx
// 006a518a  c20800               ret 8
// 006a518d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a5191  83c004               add eax, 4
// 006a5194  50                   push eax
// 006a5195  ff1534d47700         call dword ptr [0x77d434]
// 006a519b  b801000000           mov eax, 1
// 006a51a0  59                   pop ecx
// 006a51a1  c20800               ret 8

extern "C" int __stdcall sub_6D81D0(int a, int* b, int* c);
extern "C" int (__stdcall *g_fn)(void*);

struct CXTPShortcutManager
{
    int sub_6A5170(int a, int b);
};

int CXTPShortcutManager::sub_6A5170(int a, int b)
{
    int local1;
    int local2;
    int result = sub_6D81D0(a, &local1, &local2);
    if (result == 0)
        return 0;
    g_fn((void*)(result + 4));
    return 1;
}
