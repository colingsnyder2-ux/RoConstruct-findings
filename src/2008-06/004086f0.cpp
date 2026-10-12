// from server: 97% by king_originala
// roc 2008-06 004086f0  unit: VCApp::?$CComObject  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004086f0
//
// 004086f0  6aff                 push -1
// 004086f2  681bcf7b00           push 0x7bcf1b
// 004086f7  64a100000000         mov eax, dword ptr fs:[0]
// 004086fd  50                   push eax
// 004086fe  64892500000000       mov dword ptr fs:[0], esp
// 00408705  51                   push ecx
// 00408706  33c0                 xor eax, eax
// 00408708  56                   push esi
// 00408709  8bf1                 mov esi, ecx
// 0040870b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040870f  894604               mov dword ptr [esi + 4], eax
// 00408712  c70638b68000         mov dword ptr [esi], 0x80b638
// 00408718  c7460c0cb48000       mov dword ptr [esi + 0xc], 0x80b40c
// 0040871f  894610               mov dword ptr [esi + 0x10], eax
// 00408722  894618               mov dword ptr [esi + 0x18], eax
// 00408725  89742404             mov dword ptr [esp + 4], esi
// 00408729  c7460824b68000       mov dword ptr [esi + 8], 0x80b624
// 00408730  c7460c0cb68000       mov dword ptr [esi + 0xc], 0x80b60c
// 00408737  c74614f0b58000       mov dword ptr [esi + 0x14], 0x80b5f0
// 0040873e  c7461ca4b58000       mov dword ptr [esi + 0x1c], 0x80b5a4
// 00408745  894e20               mov dword ptr [esi + 0x20], ecx
// 00408748  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040874e  8b11                 mov edx, dword ptr [ecx]
// 00408750  89442410             mov dword ptr [esp + 0x10], eax
// 00408754  8b4204               mov eax, dword ptr [edx + 4]
// 00408757  ffd0                 call eax
// 00408759  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040875d  8bc6                 mov eax, esi
// 0040875f  5e                   pop esi
// 00408760  64890d00000000       mov dword ptr fs:[0], ecx
// 00408767  83c410               add esp, 0x10
// 0040876a  c20400               ret 4

struct Module {
    virtual void unused() = 0;
    virtual void lock() = 0;
};

extern Module* module;
extern unsigned long table0Data[];
extern unsigned long baseTable12Data[];
extern unsigned long table8Data[];
extern unsigned long table12Data[];
extern unsigned long table20Data[];
extern unsigned long table28Data[];

struct Base {
    unsigned long* volatile table0;
    unsigned long references;
    unsigned long* volatile table8;
    unsigned long* volatile table12;
    unsigned long value16;
    unsigned long* volatile table20;
    unsigned long value24;
    unsigned long* volatile table28;
    unsigned long value32;

    Base(unsigned long value);
    ~Base();
};

__forceinline Base::Base(unsigned long value)
{
    references = 0;
    table0 = table0Data;
    table12 = baseTable12Data;
    value16 = 0;
    value24 = 0;
    table8 = table8Data;
    table12 = table12Data;
    table20 = table20Data;
    table28 = table28Data;
    value32 = value;
}

struct S : Base {
    S(unsigned long value);
};

S::S(unsigned long value) : Base(value)
{
    module->lock();
}
