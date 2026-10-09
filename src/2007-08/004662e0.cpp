// from server: 94% by colin
// roc 2007-08 004662e0  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004662e0
//
// 004662e0  8b442404             mov eax, dword ptr [esp + 4]
// 004662e4  d94004               fld dword ptr [eax + 4]
// 004662e7  56                   push esi
// 004662e8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004662ec  d84604               fadd dword ptr [esi + 4]
// 004662ef  57                   push edi
// 004662f0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004662f4  51                   push ecx
// 004662f5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004662f9  d95c2418             fstp dword ptr [esp + 0x18]
// 004662fd  d905005c7900         fld dword ptr [0x795c00]
// 00466303  d91c24               fstp dword ptr [esp]
// 00466306  6a14                 push 0x14
// 00466308  51                   push ecx
// 00466309  56                   push esi
// 0046630a  57                   push edi
// 0046630b  50                   push eax
// 0046630c  e8bffdffff           call 0x4660d0
// 00466311  d9ee                 fldz 
// 00466313  d95f04               fstp dword ptr [edi + 4]
// 00466316  83c418               add esp, 0x18
// 00466319  d9442414             fld dword ptr [esp + 0x14]
// 0046631d  5f                   pop edi
// 0046631e  d95e04               fstp dword ptr [esi + 4]
// 00466321  5e                   pop esi
// 00466322  c3                   ret 

struct DxUserInput {
    char pad[4];
    float field4;
};

extern float g_795c00;

extern "C" void __cdecl sub_4660d0(DxUserInput* a, DxUserInput* b, DxUserInput* c, int d, int e, float f);

void __cdecl sub_4662e0(DxUserInput* a, DxUserInput* b, DxUserInput* c, int d, int e) {
    float t = a->field4 + b->field4;
    sub_4660d0(a, c, b, d, 0x14, g_795c00);
    c->field4 = 0.0f;
    b->field4 = t;
}
