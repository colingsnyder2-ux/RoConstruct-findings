// from server: 96% by atomic.potato
// roc 2011-06 0061cf20  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061cf20
//
// 0061cf20  83ec08               sub esp, 8
// 0061cf23  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061cf27  56                   push esi
// 0061cf28  8bf1                 mov esi, ecx
// 0061cf2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061cf2e  8d542404             lea edx, [esp + 4]
// 0061cf32  52                   push edx
// 0061cf33  89442408             mov dword ptr [esp + 8], eax
// 0061cf37  894c240c             mov dword ptr [esp + 0xc], ecx
// 0061cf3b  e840780e00           call 0x704780
// 0061cf40  83c404               add esp, 4
// 0061cf43  84c0                 test al, al
// 0061cf45  7521                 jne 0x61cf68
// 0061cf47  8d4608               lea eax, [esi + 8]
// 0061cf4a  85c0                 test eax, eax
// 0061cf4c  740d                 je 0x61cf5b
// 0061cf4e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061cf52  8b542408             mov edx, dword ptr [esp + 8]
// 0061cf56  8908                 mov dword ptr [eax], ecx
// 0061cf58  895004               mov dword ptr [eax + 4], edx
// 0061cf5b  c70684aec400         mov dword ptr [esi], 0xc4ae84
// 0061cf61  5e                   pop esi
// 0061cf62  83c408               add esp, 8
// 0061cf65  c20800               ret 8
// 0061cf68  c70600000000         mov dword ptr [esi], 0
// 0061cf6e  5e                   pop esi
// 0061cf6f  83c408               add esp, 8
// 0061cf72  c20800               ret 8

struct S {
    int f(int a, int b);
};

extern bool func_00704780(int*);

int S::f(int a, int b)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    if (!func_00704780(local)) {
        int* p = (int*)((char*)this + 8);
        if (p) {
            p[0] = local[0];
            p[1] = local[1];
        }
        *(int*)this = 0xc4ae84;
    } else {
        *(int*)this = 0;
    }
    return 0;
}
