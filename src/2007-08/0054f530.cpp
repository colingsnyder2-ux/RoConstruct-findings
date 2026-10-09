// from server: 43% by colin
// roc 2007-08 0054f530  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f530
//
// 0054f530  55                   push ebp
// 0054f531  8bec                 mov ebp, esp
// 0054f533  6aff                 push -1
// 0054f535  6890287500           push 0x752890
// 0054f53a  64a100000000         mov eax, dword ptr fs:[0]
// 0054f540  50                   push eax
// 0054f541  64892500000000       mov dword ptr fs:[0], esp
// 0054f548  51                   push ecx
// 0054f549  8b01                 mov eax, dword ptr [ecx]
// 0054f54b  8b08                 mov ecx, dword ptr [eax]
// 0054f54d  53                   push ebx
// 0054f54e  33d2                 xor edx, edx
// 0054f550  895124               mov dword ptr [ecx + 0x24], edx
// 0054f553  8b08                 mov ecx, dword ptr [eax]
// 0054f555  56                   push esi
// 0054f556  57                   push edi
// 0054f557  8955fc               mov dword ptr [ebp - 4], edx
// 0054f55a  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054f55d  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054f560  89511c               mov dword ptr [ecx + 0x1c], edx
// 0054f563  895120               mov dword ptr [ecx + 0x20], edx
// 0054f566  8b00                 mov eax, dword ptr [eax]
// 0054f568  6a01                 push 1
// 0054f56a  6a01                 push 1
// 0054f56c  8bc8                 mov ecx, eax
// 0054f56e  e8cdd40700           call 0x5cca40

struct Inner
{
    Inner* field_0;
    char pad4[0x10];
    void* field_14;
    char pad18[4];
    void* field_1c;
    void* field_20;
    void* field_24;
};

struct Outer
{
    Inner* field_0;
    void reset();
};

extern "C" void __stdcall sub_005cca40(void* p, int a, int b);

void Outer::reset()
{
    Inner* p = field_0;
    Inner* q = p->field_0;
    q->field_24 = 0;
    Inner* r = p->field_0;
    r->field_1c = r->field_14;
    r->field_20 = r->field_14;
    Inner* s = p->field_0;
    sub_005cca40(s, 1, 1);
}
