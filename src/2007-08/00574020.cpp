// from server: 69% by colin
// roc 2007-08 00574020  unit: RBX::PartInstance  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574020
//
// 00574020  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00574026  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00574029  8b442404             mov eax, dword ptr [esp + 4]
// 0057402d  d94104               fld dword ptr [ecx + 4]
// 00574030  83c104               add ecx, 4
// 00574033  d918                 fstp dword ptr [eax]
// 00574035  d94104               fld dword ptr [ecx + 4]
// 00574038  d95804               fstp dword ptr [eax + 4]
// 0057403b  d94108               fld dword ptr [ecx + 8]
// 0057403e  d95808               fstp dword ptr [eax + 8]
// 00574041  c20400               ret 4

struct PartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void getPos(float* out);
};

void PartInstance::getPos(float* out)
{
    char* p = (char*)field_1d8;
    float* src = (float*)(*(char**)(p + 0x60) + 4);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}
