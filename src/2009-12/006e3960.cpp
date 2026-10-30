// roc 2009-12 006e3960  unit: RBX::RotatePJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3960
//
// 006e3960  8b819c010000         mov eax, dword ptr [ecx + 0x19c]
// 006e3966  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getParent@GeometryBucket@InstancedGeometry@Ogre@@QAEPAVMaterialBucket@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
