// from server: 68% by colin
// roc 2007-08 005f6090  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6090
//
// 005f6090  51                   push ecx
// 005f6091  85c9                 test ecx, ecx
// 005f6093  7405                 je 0x5f609a
// 005f6095  8d4104               lea eax, [ecx + 4]
// 005f6098  eb02                 jmp 0x5f609c
// 005f609a  33c0                 xor eax, eax
// 005f609c  56                   push esi
// 005f609d  8bb1e8000000         mov esi, dword ptr [ecx + 0xe8]
// 005f60a3  50                   push eax
// 005f60a4  b9e07e8c00           mov ecx, 0x8c7ee0
// 005f60a9  e8c2a1f7ff           call 0x570270
// 005f60ae  85c0                 test eax, eax
// 005f60b0  740e                 je 0x5f60c0
// 005f60b2  56                   push esi
// 005f60b3  8d4c240b             lea ecx, [esp + 0xb]
// 005f60b7  51                   push ecx
// 005f60b8  8d4810               lea ecx, [eax + 0x10]
// 005f60bb  e860daffff           call 0x5f3b20
// 005f60c0  5e                   pop esi
// 005f60c1  59                   pop ecx
// 005f60c2  c20400               ret 4

struct VColor3Value {
    char pad[0xe8];
    int field_e8;
};

struct FactoryProduct {
    int f(int arg);
};

extern "C" int __stdcall sub_570270(int, int);
extern "C" int __stdcall sub_5f3b20(int, int);

int FactoryProduct::f(int arg) {
    VColor3Value* p = (VColor3Value*)this;
    int* self = (int*)this;
    int* ptr;
    if (self != 0) {
        ptr = self + 1;
    } else {
        ptr = 0;
    }
    int val = p->field_e8;
    int result = sub_570270(0x8c7ee0, (int)ptr);
    if (result != 0) {
        sub_5f3b20(result + 0x10, (int)&val);
    }
    return arg;
}
