// from server: 100% by king_originala
// roc 2008-06 00682100  unit: Ogre::RbxSceneNode  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00682100
//
// 00682100  83ec08               sub esp, 8
// 00682103  56                   push esi
// 00682104  57                   push edi
// 00682105  8d442414             lea eax, [esp + 0x14]
// 00682109  50                   push eax
// 0068210a  8d4c240c             lea ecx, [esp + 0xc]
// 0068210e  51                   push ecx
// 0068210f  8b0dc4db9700         mov ecx, dword ptr [0x97dbc4]
// 00682115  e8e6fdffff           call 0x681f00
// 0068211a  8b08                 mov ecx, dword ptr [eax]
// 0068211c  8b7004               mov esi, dword ptr [eax + 4]
// 0068211f  a1c4db9700           mov eax, dword ptr [0x97dbc4]
// 00682124  8b7818               mov edi, dword ptr [eax + 0x18]
// 00682127  8b00                 mov eax, dword ptr [eax]
// 00682129  85c9                 test ecx, ecx
// 0068212b  7404                 je 0x682131
// 0068212d  3bc8                 cmp ecx, eax
// 0068212f  7406                 je 0x682137
// 00682131  ff1590288000         call dword ptr [0x802890]
// 00682137  33c0                 xor eax, eax
// 00682139  3bf7                 cmp esi, edi
// 0068213b  5f                   pop edi
// 0068213c  0f95c0               setne al
// 0068213f  5e                   pop esi
// 00682140  83c408               add esp, 8
// 00682143  c20400               ret 4

struct RbxSceneNode {
    char pad[0x18];
    void* field_18;
};

struct Pair {
    void* first;
    void* second;
};

extern RbxSceneNode* g_sceneNode;
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" Pair* __fastcall sub_681F00(
    void* self, int edx, Pair* out, void** key);

bool __fastcall sub_682100(RbxSceneNode* self, int edx, void* arg)
{
    Pair result;
    Pair* p = sub_681F00(g_sceneNode, edx, &result, &arg);
    void* first = p->first;
    void* second = p->second;
    RbxSceneNode* node = g_sceneNode;
    void* f18 = node->field_18;
    void* f0 = *(void* volatile*)node;
    if (first == 0 || first != f0)
        _invalid_parameter_noinfo();
    return second != f18;
}
