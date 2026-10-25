// from server: 100% by king_originala
// roc 2008-06 0046a1b0  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a1b0
//
// 0046a1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0046a1b4  d94004               fld dword ptr [eax + 4]
// 0046a1b7  56                   push esi
// 0046a1b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0046a1bc  d84604               fadd dword ptr [esi + 4]
// 0046a1bf  57                   push edi
// 0046a1c0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046a1c4  51                   push ecx
// 0046a1c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046a1c9  d95c2418             fstp dword ptr [esp + 0x18]
// 0046a1cd  d90530c48100         fld dword ptr [0x81c430]
// 0046a1d3  d91c24               fstp dword ptr [esp]
// 0046a1d6  6a14                 push 0x14
// 0046a1d8  51                   push ecx
// 0046a1d9  56                   push esi
// 0046a1da  57                   push edi
// 0046a1db  50                   push eax
// 0046a1dc  e82ffeffff           call 0x46a010
// 0046a1e1  d9ee                 fldz 
// 0046a1e3  d95f04               fstp dword ptr [edi + 4]
// 0046a1e6  83c418               add esp, 0x18
// 0046a1e9  d9442414             fld dword ptr [esp + 0x14]
// 0046a1ed  5f                   pop edi
// 0046a1ee  d95e04               fstp dword ptr [esi + 4]
// 0046a1f1  5e                   pop esi
// 0046a1f2  c3                   ret 

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
