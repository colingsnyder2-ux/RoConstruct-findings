// from server: 100% by colin
// roc 2008-06 005102d0  unit: seg_00510000  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005102d0
//
// 005102d0  64a100000000         mov eax, dword ptr fs:[0]
// 005102d6  6aff                 push -1
// 005102d8  6838c37c00           push 0x7cc338
// 005102dd  50                   push eax
// 005102de  8b442414             mov eax, dword ptr [esp + 0x14]
// 005102e2  64892500000000       mov dword ptr fs:[0], esp
// 005102e9  81ec98000000         sub esp, 0x98
// 005102ef  83f807               cmp eax, 7
// 005102f2  0f8727010000         ja 0x51041f
// 005102f8  ff248570045100       jmp dword ptr [eax*4 + 0x510470]
// 005102ff  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00510306  50                   push eax
// 00510307  e8e4fbffff           call 0x50fef0
// 0051030c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00510313  64890d00000000       mov dword ptr fs:[0], ecx
// 0051031a  81c4a4000000         add esp, 0xa4
// 00510320  c20800               ret 8
// 00510323  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0051032a  52                   push edx
// 0051032b  e810e9ffff           call 0x50ec40
// 00510330  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00510337  64890d00000000       mov dword ptr fs:[0], ecx
// 0051033e  81c4a4000000         add esp, 0xa4
// 00510344  c20800               ret 8
// 00510347  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0051034e  50                   push eax
// 0051034f  e87ccaffff           call 0x50cdd0
// 00510354  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0051035b  64890d00000000       mov dword ptr fs:[0], ecx
// 00510362  81c4a4000000         add esp, 0xa4
// 00510368  c20800               ret 8
// 0051036b  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00510372  52                   push edx
// 00510373  e8c8c7ffff           call 0x50cb40
// 00510378  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0051037f  64890d00000000       mov dword ptr fs:[0], ecx
// 00510386  81c4a4000000         add esp, 0xa4
// 0051038c  c20800               ret 8
// 0051038f  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00510396  50                   push eax
// 00510397  e894b7ffff           call 0x50bb30
// 0051039c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005103a3  64890d00000000       mov dword ptr fs:[0], ecx
// 005103aa  81c4a4000000         add esp, 0xa4
// 005103b0  c20800               ret 8
// 005103b3  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 005103ba  52                   push edx
// 005103bb  e880bcffff           call 0x50c040
// 005103c0  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005103c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005103ce  81c4a4000000         add esp, 0xa4
// 005103d4  c20800               ret 8
// 005103d7  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 005103de  50                   push eax
// 005103df  e8dcf0ffff           call 0x50f4c0
// 005103e4  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005103eb  64890d00000000       mov dword ptr fs:[0], ecx
// 005103f2  81c4a4000000         add esp, 0xa4
// 005103f8  c20800               ret 8
// 005103fb  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00510402  52                   push edx
// 00510403  e8f8d3ffff           call 0x50d800
// 00510408  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0051040f  64890d00000000       mov dword ptr fs:[0], ecx
// 00510416  81c4a4000000         add esp, 0xa4
// 0051041c  c20800               ret 8
// 0051041f  6884828200           push 0x828284
// 00510424  8d4c2404             lea ecx, [esp + 4]
// 00510428  ff1558248000         call dword ptr [0x802458]
// 0051042e  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00510435  8d44241c             lea eax, [esp + 0x1c]
// 00510439  50                   push eax
// 0051043a  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 00510445  e8e6a5ffff           call 0x50aa30
// 0051044a  50                   push eax
// 0051044b  8d4c2404             lea ecx, [esp + 4]
// 0051044f  51                   push ecx
// 00510450  8d4c2440             lea ecx, [esp + 0x40]
// 00510454  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0051045c  e84f24f6ff           call 0x4728b0
// 00510461  6878c48d00           push 0x8dc478
// 00510466  8d54243c             lea edx, [esp + 0x3c]
// 0051046a  52                   push edx
// 0051046b  e81c111900           call 0x6a158c
// 00510470  6b0351               imul eax, dword ptr [ebx], 0x51
// 00510473  00b30351008f         add byte ptr [ebx - 0x70ffaefd], dh
// 00510479  035100               add edx, dword ptr [ecx]
// 0051047c  fb                   sti 
// 0051047d  035100               add edx, dword ptr [ecx]
// 00510480  d7                   xlatb 
// 00510481  035100               add edx, dword ptr [ecx]
// 00510484  47                   inc edi
// 00510485  035100               add edx, dword ptr [ecx]
// 00510488  ff02                 inc dword ptr [edx]
// 0051048a  51                   push ecx
// 0051048b  0023                 add byte ptr [ebx], ah
// 0051048d  035100               add edx, dword ptr [ecx]

// from server: 67% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>
#include <stdexcept>
namespace G3D {
class BinaryInput {
public:
    std::string getFilename() const;
};
class GImage {
public:
    enum Format {JPEG, BMP, TGA, PCX, ICO, PNG, PPM_ASCII, PPM, AUTODETECT, UNKNOWN};
    class Error : public std::runtime_error {
    public:
        Error(const std::string& reason, const std::string& filename = "");
        std::string reason;
        std::string filename;
    };
    void decode(BinaryInput& input, Format format);
    void decodePCX(BinaryInput& input);
    void decodeICO(BinaryInput& input);
    void decodeTGA(BinaryInput& input);
    void decodeBMP(BinaryInput& input);
    void decodeJPEG(BinaryInput& input);
    void decodePNG(BinaryInput& input);
    void decodePPMASCII(BinaryInput& input);
    void decodePPM(BinaryInput& input);
};
void GImage::decode(BinaryInput& input, Format format) {
    switch (format) {
    case PPM_ASCII:
        decodePPMASCII(input);
        break;
    case PPM:
        decodePPM(input);
        break;
    case PNG:
        decodePNG(input);
        break;
    case JPEG:
        decodeJPEG(input);
        break;
    case TGA:
        decodeTGA(input);
        break;
    case BMP:
        decodeBMP(input);
        break;
    case ICO:
        decodeICO(input);
        break;
    case PCX:
        decodePCX(input);
        break;
    default:
        throw Error("invalid format", input.getFilename());
    }
}
}
