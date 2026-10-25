// from server: 100% by king_originala
// roc 2008-06 0068c410  unit: Ogre::RbxSceneManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c410
//
// 0068c410  83ec40               sub esp, 0x40
// 0068c413  56                   push esi
// 0068c414  57                   push edi
// 0068c415  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0068c419  807f2600             cmp byte ptr [edi + 0x26], 0
// 0068c41d  8bf1                 mov esi, ecx
// 0068c41f  7418                 je 0x68c439
// 0068c421  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c424  8b01                 mov eax, dword ptr [ecx]
// 0068c426  8b15ec468000         mov edx, dword ptr [0x8046ec]
// 0068c42c  8b4068               mov eax, dword ptr [eax + 0x68]
// 0068c42f  52                   push edx
// 0068c430  ffd0                 call eax
// 0068c432  c686d841000001       mov byte ptr [esi + 0x41d8], 1
// 0068c439  807f2500             cmp byte ptr [edi + 0x25], 0
// 0068c43d  7430                 je 0x68c46f
// 0068c43f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c442  8b11                 mov edx, dword ptr [ecx]
// 0068c444  8b9210010000         mov edx, dword ptr [edx + 0x110]
// 0068c44a  6a00                 push 0
// 0068c44c  8d44240c             lea eax, [esp + 0xc]
// 0068c450  50                   push eax
// 0068c451  a1ec468000           mov eax, dword ptr [0x8046ec]
// 0068c456  50                   push eax
// 0068c457  ffd2                 call edx
// 0068c459  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c45c  8b01                 mov eax, dword ptr [ecx]
// 0068c45e  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0068c461  8d542408             lea edx, [esp + 8]
// 0068c465  52                   push edx
// 0068c466  ffd0                 call eax
// 0068c468  c686d941000001       mov byte ptr [esi + 0x41d9], 1
// 0068c46f  5f                   pop edi
// 0068c470  5e                   pop esi
// 0068c471  83c440               add esp, 0x40
// 0068c474  c20400               ret 4

struct Matrix {
    float m[16];
};

extern const Matrix* identity;

struct Renderer;

struct RendererTable {
    void* reserved0[26];
    void (__thiscall *setWorld)(Renderer*, const Matrix*);
    void (__thiscall *setView)(Renderer*, const Matrix*);
    void* reserved1[40];
    void (__thiscall *convertProjection)(Renderer*, const Matrix*, Matrix*, bool);
};

struct Renderer {
    RendererTable* table;
};

struct Options {
    char reserved[0x25];
    bool view;
    bool world;
};

struct SceneManager {
    char reserved0[0x34];
    Renderer* renderer;
    char reserved1[0x41d8 - 0x38];
    bool worldChanged;
    bool viewChanged;

    void update(const Options* options);
};

void SceneManager::update(const Options* options)
{
    Matrix converted;
    if (options->world) {
        renderer->table->setWorld(renderer, identity);
        worldChanged = true;
    }
    if (options->view) {
        renderer->table->convertProjection(renderer, identity, &converted, false);
        renderer->table->setView(renderer, &converted);
        viewChanged = true;
    }
}
