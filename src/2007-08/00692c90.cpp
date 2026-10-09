// from server: 71% by colin
// roc 2007-08 00692c90  unit: CXTPStatusBar  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692c90
//
// 00692c90  53                   push ebx
// 00692c91  56                   push esi
// 00692c92  8bf1                 mov esi, ecx
// 00692c94  57                   push edi
// 00692c95  8bbe9c000000         mov edi, dword ptr [esi + 0x9c]
// 00692c9b  33db                 xor ebx, ebx
// 00692c9d  33d2                 xor edx, edx
// 00692c9f  85ff                 test edi, edi
// 00692ca1  7e24                 jle 0x692cc7
// 00692ca3  85d2                 test edx, edx
// 00692ca5  7c26                 jl 0x692ccd
// 00692ca7  3bd7                 cmp edx, edi
// 00692ca9  7d22                 jge 0x692ccd
// 00692cab  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 00692cb1  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 00692cb4  e837f5ffff           call 0x6921f0
// 00692cb9  85c0                 test eax, eax
// 00692cbb  7403                 je 0x692cc0
// 00692cbd  83c301               add ebx, 1
// 00692cc0  83c201               add edx, 1
// 00692cc3  3bd7                 cmp edx, edi
// 00692cc5  7cdc                 jl 0x692ca3
// 00692cc7  5f                   pop edi
// 00692cc8  5e                   pop esi
// 00692cc9  8bc3                 mov eax, ebx
// 00692ccb  5b                   pop ebx
// 00692ccc  c3                   ret 
// 00692ccd  e94ed2f9ff           jmp 0x62ff20

struct CXTPStatusBar {
    int GetVisibleButtonCount();
    int m_nCount;
    void* m_pButtons;
};

extern "C" int __fastcall sub_6921F0(void* p);

int CXTPStatusBar::GetVisibleButtonCount()
{
    int count = 0;
    int i = 0;
    int n = *(int*)((char*)this + 0x9c);
    if (n > 0)
    {
        do
        {
            if (i < 0 || i >= n)
                break;
            void* p = *(void**)((char*)this + 0x98);
            void* item = *(void**)((char*)p + i * 4);
            if (sub_6921F0(item))
                count++;
            i++;
        } while (i < n);
    }
    return count;
}
