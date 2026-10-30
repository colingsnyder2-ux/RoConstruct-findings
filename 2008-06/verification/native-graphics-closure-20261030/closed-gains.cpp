#pragma comment(linker, "/INCLUDE:??0RenderStats@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1DepthBlur@Render@RBX@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1Geometry@MeshAlg@G3D@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:??1ToneMap@G3D@@QAE@XZ")
#pragma comment(linker, "/INCLUDE:?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ")

#include "RenderLib/RenderSurface.h"
#include "RenderLib/RenderStats.h"
#include <cstdio>
#undef main
typedef char SurfaceSize[(sizeof(RBX::Render::RenderSurface) == 0x44) ? 1 : -1];
typedef char ShadowSize[(sizeof(RBX::Render::Mesh::ShadowSurface) == 0x34) ? 1 : -1];
typedef char StatsSize[(sizeof(RenderStats) == 0x238) ? 1 : -1];
int main() {
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
