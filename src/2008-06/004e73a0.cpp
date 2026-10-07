// roc 2008-06 004e73a0  unit: RBX::ViewNew::Texture  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e73a0
//
// 004e73a0  56                   push esi
// 004e73a1  8bf1                 mov esi, ecx
// 004e73a3  e808f5ffff           call 0x4e68b0
// 004e73a8  8bce                 mov ecx, esi
// 004e73aa  5e                   pop esi
// 004e73ab  e990f3ffff           jmp 0x4e6740
// auto-matched from its assembly shape

struct S_func_004e73a0 { void f(); void a(); void b(); };
void S_func_004e73a0::f()
{
    a();
    b();
}
