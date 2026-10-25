// from server: 97% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render TextureProxy.cpp

#pragma pack(push, 1)
struct TextureProxy {
    char pad[0x30];
    void* texture;

    void* getIfResolved() const {
        return texture;
    }
};
#pragma pack(pop)