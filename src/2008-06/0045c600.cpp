// from server: 100% by king_originala
// roc 2008-06 0045c600  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c600
//
// 0045c600  56                   push esi
// 0045c601  8b742408             mov esi, dword ptr [esp + 8]
// 0045c605  6a00                 push 0
// 0045c607  6850dd9200           push 0x92dd50
// 0045c60c  687c909200           push 0x92907c
// 0045c611  6a00                 push 0
// 0045c613  56                   push esi
// 0045c614  e8ad512400           call 0x6a17c6
// 0045c619  83c414               add esp, 0x14
// 0045c61c  85c0                 test eax, eax
// 0045c61e  740f                 je 0x45c62f
// 0045c620  d9e8                 fld1 
// 0045c622  51                   push ecx
// 0045c623  8bc8                 mov ecx, eax
// 0045c625  d91c24               fstp dword ptr [esp]
// 0045c628  e823171400           call 0x59dd50
// 0045c62d  5e                   pop esi
// 0045c62e  c3                   ret 
// 0045c62f  6a00                 push 0
// 0045c631  68402a9300           push 0x932a40
// 0045c636  687c909200           push 0x92907c
// 0045c63b  6a00                 push 0
// 0045c63d  56                   push esi
// 0045c63e  e883512400           call 0x6a17c6
// 0045c643  83c414               add esp, 0x14
// 0045c646  85c0                 test eax, eax
// 0045c648  740c                 je 0x45c656
// 0045c64a  6800c64500           push 0x45c600
// 0045c64f  8bc8                 mov ecx, eax
// 0045c651  e81afeffff           call 0x45c470
// 0045c656  5e                   pop esi
// 0045c657  c3                   ret 

struct Instance {};

struct Part {
    void setValue(float value);
};

struct Model {
    void visit(void (__cdecl *callback)(Instance*));
};

extern const char instanceType;
extern const char partType;
extern const char modelType;

extern "C" void* __cdecl castObject(
    void* object, int offset, const void* sourceType,
    const void* targetType, int isReference);

void __cdecl apply(Instance* object)
{
    Part* part = static_cast<Part*>(
        castObject(object, 0, &instanceType, &partType, 0));

    if (part) {
        part->setValue(1.0f);
        return;
    }

    Model* model = static_cast<Model*>(
        castObject(object, 0, &instanceType, &modelType, 0));

    if (model)
        model->visit(apply);
}
