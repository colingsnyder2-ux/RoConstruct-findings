// from server: 45% by colin
// roc 2007-08 0054dcc0  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054dcc0
//
// 0054dcc0  55                   push ebp
// 0054dcc1  8bec                 mov ebp, esp
// 0054dcc3  6aff                 push -1
// 0054dcc5  6840277500           push 0x752740
// 0054dcca  64a100000000         mov eax, dword ptr fs:[0]
// 0054dcd0  50                   push eax
// 0054dcd1  64892500000000       mov dword ptr fs:[0], esp
// 0054dcd8  51                   push ecx
// 0054dcd9  8b01                 mov eax, dword ptr [ecx]
// 0054dcdb  8b08                 mov ecx, dword ptr [eax]
// 0054dcdd  53                   push ebx
// 0054dcde  56                   push esi
// 0054dcdf  33f6                 xor esi, esi
// 0054dce1  897124               mov dword ptr [ecx + 0x24], esi
// 0054dce4  8b08                 mov ecx, dword ptr [eax]
// 0054dce6  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054dce9  57                   push edi
// 0054dcea  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054dced  89511c               mov dword ptr [ecx + 0x1c], edx
// 0054dcf0  895120               mov dword ptr [ecx + 0x20], edx
// 0054dcf3  8b00                 mov eax, dword ptr [eax]
// 0054dcf5  6a01                 push 1
// 0054dcf7  56                   push esi
// 0054dcf8  8bc8                 mov ecx, eax
// 0054dcfa  8975fc               mov dword ptr [ebp - 4], esi
// 0054dcfd  e83eed0700           call 0x5cca40

struct Inner {
    char pad[0x14];
    int field14;
    char pad2[4];
    int field1c;
    int field20;
    int field24;
    void method(int, int);
};

struct Outer {
    Inner* ptr;
};

struct Target {
    Outer* field0;
    void func();
};

void Target::func()
{
    Inner* p = field0->ptr;
    Inner* q = *(Inner**)p;
    q->field24 = 0;
    Inner* r = *(Inner**)p;
    int v = r->field14;
    r->field1c = v;
    r->field20 = v;
    Inner* s = *(Inner**)p;
    s->method(0, 1);
}
