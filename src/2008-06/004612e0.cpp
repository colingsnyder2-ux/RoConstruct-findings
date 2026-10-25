// from server: 100% by king_originala
// roc 2008-06 004612e0  unit: Scintilla::CScintillaCtrl  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004612e0
//
// 004612e0  51                   push ecx
// 004612e1  56                   push esi
// 004612e2  57                   push edi
// 004612e3  6a00                 push 0
// 004612e5  8bf1                 mov esi, ecx
// 004612e7  8b4658               mov eax, dword ptr [esi + 0x58]
// 004612ea  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 004612ed  6a00                 push 0
// 004612ef  685f080000           push 0x85f
// 004612f4  50                   push eax
// 004612f5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004612fd  ffd1                 call ecx
// 004612ff  8b5658               mov edx, dword ptr [esi + 0x58]
// 00461302  6a00                 push 0
// 00461304  6a00                 push 0
// 00461306  8bf8                 mov edi, eax
// 00461308  8b4654               mov eax, dword ptr [esi + 0x54]
// 0046130b  6861080000           push 0x861
// 00461310  52                   push edx
// 00461311  ffd0                 call eax
// 00461313  2bc7                 sub eax, edi
// 00461315  40                   inc eax
// 00461316  50                   push eax
// 00461317  e83af62300           call 0x6a0956
// 0046131c  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0046131f  8b5654               mov edx, dword ptr [esi + 0x54]
// 00461322  8bf8                 mov edi, eax
// 00461324  57                   push edi
// 00461325  6a00                 push 0
// 00461327  6871080000           push 0x871
// 0046132c  51                   push ecx
// 0046132d  ffd2                 call edx
// 0046132f  8b742444             mov esi, dword ptr [esp + 0x44]
// 00461333  83c434               add esp, 0x34
// 00461336  57                   push edi
// 00461337  8bce                 mov ecx, esi
// 00461339  ff15103f8000         call dword ptr [0x803f10]
// 0046133f  57                   push edi
// 00461340  e805f62300           call 0x6a094a
// 00461345  83c404               add esp, 4
// 00461348  5f                   pop edi
// 00461349  8bc6                 mov eax, esi
// 0046134b  5e                   pop esi
// 0046134c  59                   pop ecx
// 0046134d  c20400               ret 4

struct Text;

extern "C" void* __cdecl allocate(unsigned int);
extern "C" void __cdecl release(void*);
extern void (__thiscall *constructText)(Text*, const char*);

struct S {
    char padding[0x54];
    int (__cdecl *direct)(int, unsigned int, unsigned int, int);
    int context;

    Text* getSelectedText(Text* result);
};

Text* S::getSelectedText(Text* result)
{
    volatile int state = 0;
    int start = direct(context, 0x85F, 0, 0);
    int end = direct(context, 0x861, 0, 0);
    char* buffer = static_cast<char*>(allocate(end - start + 1));
    direct(context, 0x871, 0, reinterpret_cast<int>(buffer));
    constructText(result, buffer);
    release(buffer);
    return result;
}
