// from server: 71% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_king_originala_physics_b750c319e2f9a5b3.cpp

// Candidate translation unit (score above; library headers required).
#include "util/ContentProvider.h"
#include "RbxGraphics/TextureProxyBase.h"
namespace RBX {class Adorn;class Textures {public:static TextureProxyBaseRef getTextureProxy(Adorn*,const ContentId&);};}
extern RBX::ContentProvider* context;
RBX::TextureProxyBaseRef reconstruct(RBX::Adorn* adorn,const RBX::ContentId& id) {
 if(context->hasContent(id))return RBX::Textures::getTextureProxy(adorn,id);
 return RBX::TextureProxyBaseRef();
}
typedef char content_size[sizeof(RBX::ContentId)==32?1:-1];
typedef char result_size[sizeof(RBX::TextureProxyBaseRef)==4?1:-1];
