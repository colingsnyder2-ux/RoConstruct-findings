// roc 2009-06 00837980  unit: RBX::RenderNew::TextureProxy  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00837980
//
// 00837980  55                   push ebp
// 00837981  8bec                 mov ebp, esp
// 00837983  83e4f8               and esp, 0xfffffff8
// 00837986  83ec1c               sub esp, 0x1c
// 00837989  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0083798d  dd4510               fld qword ptr [ebp + 0x10]
// 00837990  dc0d403e8d00         fmul qword ptr [0x8d3e40]
// 00837996  53                   push ebx
// 00837997  56                   push esi
// 00837998  57                   push edi
// 00837999  dd542420             fst qword ptr [esp + 0x20]
// 0083799d  8bf9                 mov edi, ecx
// 0083799f  db8700020000         fild dword ptr [edi + 0x200]
// 008379a5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008379a8  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 008379ab  d9c0                 fld st(0)
// 008379ad  d8ca                 fmul st(2)
// 008379af  dab704020000         fidiv dword ptr [edi + 0x204]
// 008379b5  def1                 fdivrp st(1)
// 008379b7  dd542418             fst qword ptr [esp + 0x18]
// 008379bb  d9ee                 fldz 
// 008379bd  dd542410             fst qword ptr [esp + 0x10]
// 008379c1  756c                 jne 0x837a2f
// 008379c3  33f6                 xor esi, esi
// 008379c5  85db                 test ebx, ebx
// 008379c7  0f8e8e000000         jle 0x837a5b
// 008379cd  ddda                 fstp st(2)
// 008379cf  eb02                 jmp 0x8379d3
// 008379d1  d9c9                 fxch st(1)
// 008379d3  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 008379d6  7617                 jbe 0x8379ef
// 008379d8  ddd9                 fstp st(1)
// 008379da  ddd8                 fstp st(0)
// 008379dc  ff15ace98900         call dword ptr [0x89e9ac]
// 008379e2  dd442418             fld qword ptr [esp + 0x18]
// 008379e6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008379e9  dd442410             fld qword ptr [esp + 0x10]
// 008379ed  d9c9                 fxch st(1)
// 008379ef  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 008379f3  7205                 jb 0x8379fa
// 008379f5  8b4104               mov eax, dword ptr [ecx + 4]
// 008379f8  eb03                 jmp 0x8379fd
// 008379fa  8d4104               lea eax, [ecx + 4]
// 008379fd  0fbe0430             movsx eax, byte ptr [eax + esi]
// 00837a01  83e07f               and eax, 0x7f
// 00837a04  46                   inc esi
// 00837a05  3bf3                 cmp esi, ebx
// 00837a07  db0487               fild dword ptr [edi + eax*4]
// 00837a0a  d8c9                 fmul st(1)
// 00837a0c  dec2                 faddp st(2)
// 00837a0e  d9c9                 fxch st(1)
// 00837a10  dd542410             fst qword ptr [esp + 0x10]
// 00837a14  7cbb                 jl 0x8379d1
// 00837a16  8b4508               mov eax, dword ptr [ebp + 8]
// 00837a19  ddd9                 fstp st(1)
// 00837a1b  dd442420             fld qword ptr [esp + 0x20]
// 00837a1f  d9c9                 fxch st(1)
// 00837a21  d918                 fstp dword ptr [eax]
// 00837a23  d95804               fstp dword ptr [eax + 4]
// 00837a26  5f                   pop edi
// 00837a27  5e                   pop esi
// 00837a28  5b                   pop ebx
// 00837a29  8be5                 mov esp, ebp
// 00837a2b  5d                   pop ebp
// 00837a2c  c21400               ret 0x14
// 00837a2f  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 00837a35  ddd8                 fstp st(0)
// 00837a37  8b4508               mov eax, dword ptr [ebp + 8]
// 00837a3a  0fafcb               imul ecx, ebx
// 00837a3d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00837a41  db442410             fild dword ptr [esp + 0x10]
// 00837a45  dec9                 fmulp st(1)
// 00837a47  dc0de0ed8f00         fmul qword ptr [0x8fede0]
// 00837a4d  d918                 fstp dword ptr [eax]
// 00837a4f  d95804               fstp dword ptr [eax + 4]
// 00837a52  5f                   pop edi
// 00837a53  5e                   pop esi
// 00837a54  5b                   pop ebx
// 00837a55  8be5                 mov esp, ebp
// 00837a57  5d                   pop ebp
// 00837a58  c21400               ret 0x14
// 00837a5b  8b4508               mov eax, dword ptr [ebp + 8]
// 00837a5e  ddd9                 fstp st(1)
// 00837a60  5f                   pop edi
// 00837a61  d918                 fstp dword ptr [eax]
// 00837a63  5e                   pop esi
// 00837a64  d95804               fstp dword ptr [eax + 4]
// 00837a67  5b                   pop ebx
// 00837a68  8be5                 mov esp, ebp
// 00837a6a  5d                   pop ebp
// 00837a6b  c21400               ret 0x14
// copied from an identical function in another client (function ?measure@S@@QBEPAUSize@@PAU2@ABUText@@NH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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