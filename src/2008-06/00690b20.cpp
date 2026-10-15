// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5 OgreSceneManager.cpp

namespace Ogre {
    void SceneManager::initShadowVolumeMaterials(void)
    {
        assert( mDestRenderSystem );

        if (mShadowMaterialInitDone)
            return;

        if (!mShadowDebugPass)
        {
            MaterialPtr matDebug =
                MaterialManager::getSingleton().getByName("Ogre/Debug/ShadowVolumes");
            if (matDebug.isNull())
            {
                matDebug = MaterialManager::getSingleton().create(
                    "Ogre/Debug/ShadowVolumes",
                    ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME);
                mShadowDebugPass = matDebug->getTechnique(0)->getPass(0);
                mShadowDebugPass->setSceneBlending(SBT_ADD);
                mShadowDebugPass->setLightingEnabled(false);
                mShadowDebugPass->setDepthWriteEnabled(false);
                TextureUnitState* t = mShadowDebugPass->createTextureUnitState();
                t->setColourOperationEx(LBX_MODULATE, LBS_MANUAL, LBS_CURRENT,
                    ColourValue(0.7, 0.0, 0.2));
                mShadowDebugPass->setCullingMode(CULL_NONE);

                if (mDestRenderSystem->getCapabilities()->hasCapability(
                    RSC_VERTEX_PROGRAM))
                {
                    ShadowVolumeExtrudeProgram::initialise();

                    mShadowDebugPass->setVertexProgram(
                        ShadowVolumeExtrudeProgram::programNames[ShadowVolumeExtrudeProgram::POINT_LIGHT]);
                    mInfiniteExtrusionParams =
                        mShadowDebugPass->getVertexProgramParameters();
                    mInfiniteExtrusionParams->setAutoConstant(0,
                        GpuProgramParameters::ACT_WORLDVIEWPROJ_MATRIX);
                    mInfiniteExtrusionParams->setAutoConstant(4,
                        GpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE);
                }
                matDebug->compile();

            }
            else
            {
                mShadowDebugPass = matDebug->getTechnique(0)->getPass(0);

                if (mDestRenderSystem->getCapabilities()->hasCapability(RSC_VERTEX_PROGRAM))
                {
                    mInfiniteExtrusionParams = mShadowDebugPass->getVertexProgramParameters();
                }
            }
        }

        if (!mShadowStencilPass)
        {

            MaterialPtr matStencil = MaterialManager::getSingleton().getByName(
                "Ogre/StencilShadowVolumes");
            if (matStencil.isNull())
            {
                matStencil = MaterialManager::getSingleton().create(
                    "Ogre/StencilShadowVolumes",
                    ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME);
                mShadowStencilPass = matStencil->getTechnique(0)->getPass(0);

                if (mDestRenderSystem->getCapabilities()->hasCapability(
                    RSC_VERTEX_PROGRAM))
                {

                    mShadowStencilPass->setVertexProgram(
                        ShadowVolumeExtrudeProgram::programNames[ShadowVolumeExtrudeProgram::POINT_LIGHT_FINITE]);
                    mFiniteExtrusionParams =
                        mShadowStencilPass->getVertexProgramParameters();
                    mFiniteExtrusionParams->setAutoConstant(0,
                        GpuProgramParameters::ACT_WORLDVIEWPROJ_MATRIX);
                    mFiniteExtrusionParams->setAutoConstant(4,
                        GpuProgramParameters::ACT_LIGHT_POSITION_OBJECT_SPACE);
                    mFiniteExtrusionParams->setAutoConstant(5,
                        GpuProgramParameters::ACT_SHADOW_EXTRUSION_DISTANCE);
                }
                matStencil->compile();
            }
            else
            {
                mShadowStencilPass = matStencil->getTechnique(0)->getPass(0);

                if (mDestRenderSystem->getCapabilities()->hasCapability(RSC_VERTEX_PROGRAM))
                {
                    mFiniteExtrusionParams = mShadowStencilPass->getVertexProgramParameters();
                }
            }
        }


        if (!mShadowModulativePass)
        {

            MaterialPtr matModStencil = MaterialManager::getSingleton().getByName(
                "Ogre/StencilShadowModulationPass");
            if (matModStencil.isNull())
            {
                matModStencil = MaterialManager::getSingleton().create(
                    "Ogre/StencilShadowModulationPass",
                    ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME);
                mShadowModulativePass = matModStencil->getTechnique(0)->getPass(0);
                mShadowModulativePass->setSceneBlending(SBF_DEST_COLOUR, SBF_ZERO);
                mShadowModulativePass->setLightingEnabled(false);
                mShadowModulativePass->setDepthWriteEnabled(false);
                mShadowModulativePass->setDepthCheckEnabled(false);
                TextureUnitState* t = mShadowModulativePass->createTextureUnitState();
                t->setColourOperationEx(LBX_MODULATE, LBS_MANUAL, LBS_CURRENT,
                    mShadowColour);
                mShadowModulativePass->setCullingMode(CULL_NONE);
            }
            else
            {
                mShadowModulativePass = matModStencil->getTechnique(0)->getPass(0);
            }
        }

        if (!mFullScreenQuad)
        {
            mFullScreenQuad = new Rectangle2D();
            mFullScreenQuad->setCorners(-1,1,1,-1);
        }

        if (!mShadowCasterPlainBlackPass)
        {
            MaterialPtr matPlainBlack = MaterialManager::getSingleton().getByName(
                "Ogre/TextureShadowCaster");
            if (matPlainBlack.isNull())
            {
                matPlainBlack = MaterialManager::getSingleton().create(
                    "Ogre/TextureShadowCaster",
                    ResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME);
                mShadowCasterPlainBlackPass = matPlainBlack->getTechnique(0)->getPass(0);
                mShadowCasterPlainBlackPass->setAmbient(ColourValue::White);
                mShadowCasterPlainBlackPass->setDiffuse(ColourValue::Black);
                mShadowCasterPlainBlackPass->setSelfIllumination(ColourValue::Black);
                mShadowCasterPlainBlackPass->setSpecular(ColourValue::Black);
                mShadowCasterPlainBlackPass->setFog(true, FOG_NONE);
            }
            else
            {
                mShadowCasterPlainBlackPass = matPlainBlack->getTechnique(0)->getPass(0);
            }
        }

        mShadowMaterialInitDone = true;
    }
}