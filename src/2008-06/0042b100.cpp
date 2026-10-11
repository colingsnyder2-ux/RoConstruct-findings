// from server: 48% by colin
// roc 2008-06 0042b100  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b100
//
// 0042b100  56                   push esi
// 0042b101  8bc1                 mov eax, ecx
// 0042b103  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b107  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0042b10a  8b10                 mov edx, dword ptr [eax]
// 0042b10c  83ec1c               sub esp, 0x1c
// 0042b10f  8bcc                 mov ecx, esp
// 0042b111  89642428             mov dword ptr [esp + 0x28], esp
// 0042b115  52                   push edx
// 0042b116  83c608               add esi, 8
// 0042b119  ff155c248000         call dword ptr [0x80245c]
// 0042b11f  8bce                 mov ecx, esi
// 0042b121  e8fafaffff           call 0x42ac20
// 0042b126  8b442408             mov eax, dword ptr [esp + 8]
// 0042b12a  5e                   pop esi
// 0042b12b  c20800               ret 8

struct S {
    void f(int, int);
};

extern "C" void __stdcall sub_42AC20(int, int);

void S::f(int a, int b)
{
    int* p = (int*)b;
    int v = p[4];
    int* q = (int*)this;
    int w = *q;
    char buf[28];
    sub_42AC20((int)buf, w);
    sub_42AC20(v + 8, (int)buf);
}
