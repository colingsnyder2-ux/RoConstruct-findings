// roc 2011-06 00646280  unit: RBX::StarterGuiService  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00646280
//
// 00646280  33d2                 xor edx, edx
// 00646282  38510d               cmp byte ptr [ecx + 0xd], dl
// 00646285  7416                 je 0x64629d
// 00646287  8b442408             mov eax, dword ptr [esp + 8]
// 0064628b  56                   push esi
// 0064628c  8b742408             mov esi, dword ptr [esp + 8]
// 00646290  50                   push eax
// 00646291  56                   push esi
// 00646292  e859feffff           call 0x6460f0
// 00646297  8bc6                 mov eax, esi
// 00646299  5e                   pop esi
// 0064629a  c20800               ret 8
// 0064629d  8b442404             mov eax, dword ptr [esp + 4]
// 006462a1  8910                 mov dword ptr [eax], edx
// 006462a3  895004               mov dword ptr [eax + 4], edx
// 006462a6  895008               mov dword ptr [eax + 8], edx
// 006462a9  89500c               mov dword ptr [eax + 0xc], edx
// 006462ac  c20800               ret 8
// copied from an identical function in another client (function ?f@StarterGuiService@@QAEPAXPAX0@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void __stdcall G1_func_00739b90(void *, void *);

struct StarterGuiService
{
    void *f(void *, void *);
};

void *StarterGuiService::f(void *a, void *b)
{
    if (*(unsigned char *)((char *)this + 13) != 0) {
        G1_func_00739b90(a, b);
        return a;
    }
    *(long *)a = 0;
    *(long *)((char *)a + 4) = 0;
    *(long *)((char *)a + 8) = 0;
    *(long *)((char *)a + 12) = 0;
    return a;
}