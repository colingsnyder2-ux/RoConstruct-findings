// roc 2010-06 0052e4d0  unit: RBX::RbxG3D::TextureProxy  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e4d0
//
// 0052e4d0  56                   push esi
// 0052e4d1  8bf1                 mov esi, ecx
// 0052e4d3  e878f7ffff           call 0x52dc50
// 0052e4d8  8bce                 mov ecx, esi
// 0052e4da  5e                   pop esi
// 0052e4db  e910f6ffff           jmp 0x52daf0
// auto-matched from its assembly shape

struct S_func_0052e4d0 { void f(); void a(); void b(); };
void S_func_0052e4d0::f()
{
    a();
    b();
}
