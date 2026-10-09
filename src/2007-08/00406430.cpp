// from server: 73% by colin
// roc 2007-08 00406430  unit: VCWorkspace::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00406430
//
// 00406430  56                   push esi
// 00406431  8b742414             mov esi, dword ptr [esp + 0x14]
// 00406435  85f6                 test esi, esi
// 00406437  7509                 jne 0x406442
// 00406439  b803400080           mov eax, 0x80004003
// 0040643e  5e                   pop esi
// 0040643f  c21000               ret 0x10
// 00406442  33c0                 xor eax, eax
// 00406444  3905f00d8800         cmp dword ptr [0x880df0], eax
// 0040644a  750f                 jne 0x40645b
// 0040644c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406450  50                   push eax
// 00406451  b9e40d8800           mov ecx, 0x880de4
// 00406456  e895f1ffff           call 0x4055f0
// 0040645b  8b0df00d8800         mov ecx, dword ptr [0x880df0]
// 00406461  890e                 mov dword ptr [esi], ecx
// 00406463  8b0df00d8800         mov ecx, dword ptr [0x880df0]
// 00406469  85c9                 test ecx, ecx
// 0040646b  740a                 je 0x406477
// 0040646d  8b11                 mov edx, dword ptr [ecx]
// 0040646f  8b4204               mov eax, dword ptr [edx + 4]
// 00406472  51                   push ecx
// 00406473  ffd0                 call eax
// 00406475  33c0                 xor eax, eax
// 00406477  5e                   pop esi
// 00406478  c21000               ret 0x10

struct VCWorkspace_ActiveDocView
{
    void* m_ptr;
};

extern "C" void __stdcall sub_4055F0(void*);

extern void* g_880DF0;
extern char  g_880DE4;

long __stdcall sub_406430(void* p1, void* p2, void* p3, void** ppOut)
{
    if (ppOut == 0)
        return (long)0x80004003;

    if (g_880DF0 == 0)
        sub_4055F0(&g_880DE4);

    *ppOut = g_880DF0;

    if (g_880DF0 != 0)
    {
        void** vtbl = *(void***)g_880DF0;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(g_880DF0);
    }

    return 0;
}
