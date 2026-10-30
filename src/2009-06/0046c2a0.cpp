// roc 2009-06 0046c2a0  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c2a0
//
// 0046c2a0  8b442404             mov eax, dword ptr [esp + 4]
// 0046c2a4  d94004               fld dword ptr [eax + 4]
// 0046c2a7  56                   push esi
// 0046c2a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046c2ac  d84604               fadd dword ptr [esi + 4]
// 0046c2af  57                   push edi
// 0046c2b0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046c2b4  51                   push ecx
// 0046c2b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046c2b9  d95c2418             fstp dword ptr [esp + 0x18]
// 0046c2bd  d90540d08b00         fld dword ptr [0x8bd040]
// 0046c2c3  d91c24               fstp dword ptr [esp]
// 0046c2c6  6a14                 push 0x14
// 0046c2c8  51                   push ecx
// 0046c2c9  56                   push esi
// 0046c2ca  57                   push edi
// 0046c2cb  50                   push eax
// 0046c2cc  e82ffeffff           call 0x46c100
// 0046c2d1  d9ee                 fldz 
// 0046c2d3  d95f04               fstp dword ptr [edi + 4]
// 0046c2d6  83c418               add esp, 0x18
// 0046c2d9  d9442414             fld dword ptr [esp + 0x14]
// 0046c2dd  5f                   pop edi
// 0046c2de  d95e04               fstp dword ptr [esi + 4]
// 0046c2e1  5e                   pop esi
// 0046c2e2  c3                   ret 
// copied from an identical function in another client (function ?update@@YAXPAUVec2@@00PAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Vec2 {
    float x;
    float y;
};

extern const float scale;
extern void __cdecl helper(Vec2 *, Vec2 *, Vec2 *, void *, int, float);

void __cdecl update(Vec2 *a, Vec2 *b, Vec2 *c, void *context)
{
    float y = a->y + c->y;
    helper(a, b, c, context, 20, scale);
    b->y = 0.0f;
    c->y = y;
}