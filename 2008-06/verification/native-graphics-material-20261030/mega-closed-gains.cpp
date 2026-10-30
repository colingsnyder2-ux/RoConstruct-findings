#pragma comment(linker, "/INCLUDE:??0RenderStats@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1DepthBlur@Render@RBX@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1Geometry@MeshAlg@G3D@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1ToneMap@G3D@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??MAttributes@MaterialFactory@View@RBX@@QBE_NABU0123@@Z")
#pragma comment(linker, "/INCLUDE:?_Lbound@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@ABUAttributes@MaterialFactory@View@RBX@@@Z")
#pragma comment(linker, "/INCLUDE:?fromGImage@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVGImage@2@PBVTextureFormat@2@W4Dimension@12@ABVSettings@12@@Z")
#pragma comment(linker, "/INCLUDE:?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ")
#pragma comment(linker, "/INCLUDE:?insert@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@2@@Z")
#pragma comment(linker, "/INCLUDE:?insert@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@2@@Z")
#pragma comment(linker, "/INCLUDE:?resolve@MegaTextureProxy@View@RBX@@EAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@PAVRenderDevice@5@@Z")
#pragma comment(linker, "/INCLUDE:?shadePixel@TextureProxy@Render@RBX@@SAXABVColor3uint8@G3D@@AAV45@@Z")

#include "RenderLib/RenderSurface.h"
#include "RenderLib/RenderStats.h"
#include <cstdio>
#undef main
typedef char SurfaceSize[(sizeof(RBX::Render::RenderSurface) == 0x44) ? 1 : -1];
typedef char ShadowSize[(sizeof(RBX::Render::Mesh::ShadowSurface) == 0x34) ? 1 : -1];
typedef char StatsSize[(sizeof(RenderStats) == 0x238) ? 1 : -1];

#include "MaterialFactoryTest.h"
int verifyMaterialOrder() {
    typedef RBX::View::MaterialFactory::Attributes Key;
    const Key keys[] = {
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.0f, 0.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.0f, 1.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.5f, 0.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_21), 0.0f, 0.0f}
    };
    typedef char KeySize[(sizeof(Key) == 12) ? 1 : -1];
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            if ((keys[i] < keys[j]) != (i < j)) return 1;
    std::printf("material ordering: 16 key comparisons passed\n");
    return 0;
}


class MegaProbe : public RBX::View::MegaTextureProxy {
public:
    MegaProbe(G3D::TextureManager& manager) : RBX::View::MegaTextureProxy(manager, "unused") {
        loaded = true;
        root = new RBX::Render::TextureProxy(manager, "cached-root", false);
    }
    RBX::Render::TextureProxy* cachedRoot() const { return root.pointer(); }
};
int verifyMegaCache() {
    typedef char MegaSize[(sizeof(RBX::View::MegaTextureProxy) == 0x58) ? 1 : -1];
    const G3D::Color3uint8 base(0, 128, 255);
    const unsigned char levels[] = {126, 128, 130, 0, 255};
    const unsigned char expected[][3] = {{0,128,255}, {0,128,255}, {0,128,255}, {0,64,128}, {253,254,255}};
    for (int i = 0; i < 5; ++i) {
        G3D::Color3uint8 pixel(levels[i], levels[i], levels[i]);
        RBX::Render::TextureProxy::shadePixel(base, pixel);
        if (pixel.r != expected[i][0] || pixel.g != expected[i][1] || pixel.b != expected[i][2]) return 2;
    }
    G3D::TextureManager manager;
    MegaProbe proxy(manager);
    RBX::Render::TextureProxy* root = proxy.cachedRoot();
    for (int i = 0; i < 16; ++i) {
        if (!static_cast<RBX::Render::TextureProxy&>(proxy).resolve(NULL).isNull() || proxy.cachedRoot() != root) return 1;
    }
    std::printf("mega cached path: 16 calls passed (no graphics context)\n");
    return 0;
}

int main() {
    if (verifyMegaCache()) return 6;
    if (verifyMaterialOrder()) return 5;
    for (int i = 0; i < 128; ++i) {
        RBX::Render::RenderSurface surface;
        RBX::Render::Mesh::ShadowSurface shadow;
        RenderStats stats;
        if (!surface.fullMesh.isNull() || !shadow.dropShadowGeometry.isNull()) return 1;
        if (shadow.edgeArray.size() || shadow.faceNormalArray.size() ||
            shadow.faceArray.size() || shadow.geometry.size()) return 2;
        shadow.geometry.append(G3D::Vector3(1, 2, 3));
        if (shadow.geometry.size() != 1 || shadow.geometry[0].y != 2) return 3;
    }
    if (RenderStats::chunkCount || RenderStats::aggregatedChunkCount || RenderStats::aggregateChunkCount) return 4;
    std::printf("graphics lifecycle: 128 construction/destruction cycles passed\n");
    return 0;
}
