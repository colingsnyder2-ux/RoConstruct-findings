// from server: 62% by colin
// roc 2008-06 00576f90  unit: RBX::DataModel  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576f90
//
// 00576f90  53                   push ebx
// 00576f91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00576f95  8b4304               mov eax, dword ptr [ebx + 4]
// 00576f98  56                   push esi
// 00576f99  57                   push edi
// 00576f9a  6a01                 push 1
// 00576f9c  50                   push eax
// 00576f9d  8bf1                 mov esi, ecx
// 00576f9f  e81c38f1ff           call 0x48a7c0
// 00576fa4  33ff                 xor edi, edi
// 00576fa6  397e04               cmp dword ptr [esi + 4], edi
// 00576fa9  7e2e                 jle 0x576fd9
// 00576fab  33d2                 xor edx, edx
// 00576fad  8d4900               lea ecx, [ecx]
// 00576fb0  8b03                 mov eax, dword ptr [ebx]
// 00576fb2  8b0e                 mov ecx, dword ptr [esi]
// 00576fb4  d90410               fld dword ptr [eax + edx]
// 00576fb7  03c2                 add eax, edx
// 00576fb9  d91c11               fstp dword ptr [ecx + edx]
// 00576fbc  d94004               fld dword ptr [eax + 4]
// 00576fbf  03ca                 add ecx, edx
// 00576fc1  d95904               fstp dword ptr [ecx + 4]
// 00576fc4  47                   inc edi
// 00576fc5  d94008               fld dword ptr [eax + 8]
// 00576fc8  83c210               add edx, 0x10
// 00576fcb  d95908               fstp dword ptr [ecx + 8]
// 00576fce  d9400c               fld dword ptr [eax + 0xc]
// 00576fd1  d9590c               fstp dword ptr [ecx + 0xc]
// 00576fd4  3b7e04               cmp edi, dword ptr [esi + 4]
// 00576fd7  7cd7                 jl 0x576fb0
// 00576fd9  5f                   pop edi
// 00576fda  8bc6                 mov eax, esi
// 00576fdc  5e                   pop esi
// 00576fdd  5b                   pop ebx
// 00576fde  c20400               ret 4

struct DataModel {
    void* data;
    int count;
    int unknown8;
    int unknownC;
    DataModel* copyFrom(const DataModel* other);
};

extern "C" void __stdcall sub_48A7C0(void* dst, void* src, int size);

DataModel* DataModel::copyFrom(const DataModel* other) {
    sub_48A7C0(this->data, other->data, 1);
    int i = 0;
    if (this->count > 0) {
        int offset = 0;
        do {
            float* src = (float*)((char*)other->data + offset);
            float* dst = (float*)((char*)this->data + offset);
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            dst[3] = src[3];
            i++;
            offset += 16;
        } while (i < this->count);
    }
    return this;
}
