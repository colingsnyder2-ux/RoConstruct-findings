// from server: 100% by king_originala
// roc 2008-06 00684640  unit: Ogre::TwoDManager  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00684640
//
// 00684640  55                   push ebp
// 00684641  8bec                 mov ebp, esp
// 00684643  83e4f8               and esp, 0xfffffff8
// 00684646  83ec1c               sub esp, 0x1c
// 00684649  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0068464d  dd4510               fld qword ptr [ebp + 0x10]
// 00684650  dc0d38d08200         fmul qword ptr [0x82d038]
// 00684656  53                   push ebx
// 00684657  56                   push esi
// 00684658  57                   push edi
// 00684659  dd542420             fst qword ptr [esp + 0x20]
// 0068465d  8bf9                 mov edi, ecx
// 0068465f  db8700020000         fild dword ptr [edi + 0x200]
// 00684665  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00684668  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0068466b  d9c0                 fld st(0)
// 0068466d  d8ca                 fmul st(2)
// 0068466f  dab704020000         fidiv dword ptr [edi + 0x204]
// 00684675  def1                 fdivrp st(1)
// 00684677  dd542418             fst qword ptr [esp + 0x18]
// 0068467b  d9ee                 fldz 
// 0068467d  dd542410             fst qword ptr [esp + 0x10]
// 00684681  756c                 jne 0x6846ef
// 00684683  33f6                 xor esi, esi
// 00684685  85db                 test ebx, ebx
// 00684687  0f8e8e000000         jle 0x68471b
// 0068468d  ddda                 fstp st(2)
// 0068468f  eb02                 jmp 0x684693
// 00684691  d9c9                 fxch st(1)
// 00684693  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 00684696  7617                 jbe 0x6846af
// 00684698  ddd9                 fstp st(1)
// 0068469a  ddd8                 fstp st(0)
// 0068469c  ff1590288000         call dword ptr [0x802890]
// 006846a2  dd442418             fld qword ptr [esp + 0x18]
// 006846a6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006846a9  dd442410             fld qword ptr [esp + 0x10]
// 006846ad  d9c9                 fxch st(1)
// 006846af  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 006846b3  7205                 jb 0x6846ba
// 006846b5  8b4104               mov eax, dword ptr [ecx + 4]
// 006846b8  eb03                 jmp 0x6846bd
// 006846ba  8d4104               lea eax, [ecx + 4]
// 006846bd  0fbe0430             movsx eax, byte ptr [eax + esi]
// 006846c1  83e07f               and eax, 0x7f
// 006846c4  46                   inc esi
// 006846c5  3bf3                 cmp esi, ebx
// 006846c7  db0487               fild dword ptr [edi + eax*4]
// 006846ca  d8c9                 fmul st(1)
// 006846cc  dec2                 faddp st(2)
// 006846ce  d9c9                 fxch st(1)
// 006846d0  dd542410             fst qword ptr [esp + 0x10]
// 006846d4  7cbb                 jl 0x684691
// 006846d6  8b4508               mov eax, dword ptr [ebp + 8]
// 006846d9  ddd9                 fstp st(1)
// 006846db  dd442420             fld qword ptr [esp + 0x20]
// 006846df  d9c9                 fxch st(1)
// 006846e1  d918                 fstp dword ptr [eax]
// 006846e3  d95804               fstp dword ptr [eax + 4]
// 006846e6  5f                   pop edi
// 006846e7  5e                   pop esi
// 006846e8  5b                   pop ebx
// 006846e9  8be5                 mov esp, ebp
// 006846eb  5d                   pop ebp
// 006846ec  c21400               ret 0x14
// 006846ef  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 006846f5  ddd8                 fstp st(0)
// 006846f7  8b4508               mov eax, dword ptr [ebp + 8]
// 006846fa  0fafcb               imul ecx, ebx
// 006846fd  894c2410             mov dword ptr [esp + 0x10], ecx
// 00684701  db442410             fild dword ptr [esp + 0x10]
// 00684705  dec9                 fmulp st(1)
// 00684707  dc0d00e88400         fmul qword ptr [0x84e800]
// 0068470d  d918                 fstp dword ptr [eax]
// 0068470f  d95804               fstp dword ptr [eax + 4]
// 00684712  5f                   pop edi
// 00684713  5e                   pop esi
// 00684714  5b                   pop ebx
// 00684715  8be5                 mov esp, ebp
// 00684717  5d                   pop ebp
// 00684718  c21400               ret 0x14
// 0068471b  8b4508               mov eax, dword ptr [ebp + 8]
// 0068471e  ddd9                 fstp st(1)
// 00684720  5f                   pop edi
// 00684721  d918                 fstp dword ptr [eax]
// 00684723  5e                   pop esi
// 00684724  d95804               fstp dword ptr [eax + 4]
// 00684727  5b                   pop ebx
// 00684728  8be5                 mov esp, ebp
// 0068472a  5d                   pop ebp
// 0068472b  c21400               ret 0x14

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

extern const double heightMultiplier;
extern const double fixedWidthMultiplier;

struct Text {
    unsigned int reserved;
    union {
        char local[16];
        char* allocated;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Size {
    float x;
    float y;
};

struct S {
    int widths[128];
    int textureWidth;
    int textureHeight;

    Size* measure(Size* result, const Text& text, volatile double height, int fixed) const;
};

Size* S::measure(Size* result, const Text& text, volatile double height, int fixed) const
{
    double scaledHeight = height * heightMultiplier;
    double width = textureWidth;
    int length = text.length;
    double scale = (width * scaledHeight / textureHeight) / width;
    double total = 0.0;

    if (!fixed) {
        for (int i = 0; i < length; ++i) {
            if (static_cast<unsigned int>(i) > text.length)
                _invalid_parameter_noinfo();

            const char* characters = text.capacity >= 16
                ? text.storage.allocated
                : text.storage.local;

            total += widths[characters[i] & 127] * scale;
        }
    } else {
        total = (widths[77] * length) * scale * fixedWidthMultiplier;
    }

    result->x = static_cast<float>(total);
    result->y = static_cast<float>(scaledHeight);
    return result;
}
