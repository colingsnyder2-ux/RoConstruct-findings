// from server: 84% by EspClaude
// from server: 63% by colin
// roc 2008-06 006a2250  unit: ActiveDocView  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2250
//
// 006a2250  8bff                 mov edi, edi
// 006a2252  55                   push ebp
// 006a2253  8bec                 mov ebp, esp
// 006a2255  6afe                 push -2
// 006a2257  68000c9000           push 0x900c00
// 006a225c  6815206a00           push 0x6a2015
// 006a2261  64a100000000         mov eax, dword ptr fs:[0]
// 006a2267  50                   push eax
// 006a2268  83ec08               sub esp, 8
// 006a226b  53                   push ebx
// 006a226c  56                   push esi
// 006a226d  57                   push edi
// 006a226e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006a2273  3145f8               xor dword ptr [ebp - 8], eax
// 006a2276  33c5                 xor eax, ebp
// 006a2278  50                   push eax
// 006a2279  8d45f0               lea eax, [ebp - 0x10]
// 006a227c  64a300000000         mov dword ptr fs:[0], eax
// 006a2282  8965e8               mov dword ptr [ebp - 0x18], esp
// 006a2285  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006a228c  6800004000           push 0x400000
// 006a2291  e82affffff           call 0x6a21c0
// 006a2296  83c404               add esp, 4
// 006a2299  85c0                 test eax, eax
// 006a229b  7455                 je 0x6a22f2
// 006a229d  8b4508               mov eax, dword ptr [ebp + 8]
// 006a22a0  2d00004000           sub eax, 0x400000
// 006a22a5  50                   push eax
// 006a22a6  6800004000           push 0x400000
// 006a22ab  e850ffffff           call 0x6a2200
// 006a22b0  83c408               add esp, 8
// 006a22b3  85c0                 test eax, eax
// 006a22b5  743b                 je 0x6a22f2
// 006a22b7  8b4024               mov eax, dword ptr [eax + 0x24]
// 006a22ba  c1e81f               shr eax, 0x1f
// 006a22bd  f7d0                 not eax
// 006a22bf  83e001               and eax, 1
// 006a22c2  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 006a22c9  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 006a22cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006a22d3  59                   pop ecx
// 006a22d4  5f                   pop edi
// 006a22d5  5e                   pop esi
// 006a22d6  5b                   pop ebx
// 006a22d7  8be5                 mov esp, ebp
// 006a22d9  5d                   pop ebp
// 006a22da  c3                   ret 
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /MD /hotpatch
typedef int BOOL;
typedef unsigned char *PBYTE;
typedef unsigned long DWORD_PTR;
typedef unsigned long DWORD;
struct IMAGE_DOS_HEADER { unsigned short e_magic; };
struct IMAGE_SECTION_HEADER { unsigned char reserved[36]; DWORD Characteristics; };
typedef IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;
#define FALSE 0
#define NULL 0
#define IMAGE_SCN_MEM_WRITE 0x80000000
#define STATUS_ACCESS_VIOLATION ((DWORD)0xC0000005L)
#define EXCEPTION_EXECUTE_HANDLER 1
#define EXCEPTION_CONTINUE_SEARCH 0
extern "C" unsigned long __cdecl _exception_code(void);
#define GetExceptionCode _exception_code

extern "C" IMAGE_DOS_HEADER __ImageBase;
extern "C" BOOL __cdecl _ValidateImageBase(PBYTE pImageBase);
extern "C" PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase, DWORD_PTR rva);

extern "C" BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)
{
    PBYTE pImageBase;
    DWORD_PTR rvaTarget;
    PIMAGE_SECTION_HEADER pSection;

    pImageBase = (PBYTE)&__ImageBase;

    __try {
        if (!_ValidateImageBase(pImageBase))
            return FALSE;
        rvaTarget = pTarget - pImageBase;
        pSection = _FindPESection(pImageBase, rvaTarget);
        if (pSection == NULL)
            return FALSE;
        return (pSection->Characteristics & IMAGE_SCN_MEM_WRITE) == 0;
    }
    __except (GetExceptionCode() == STATUS_ACCESS_VIOLATION ? EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH) {
        return FALSE;
    }
}
