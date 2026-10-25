// from server: 100% by atomic.potato
// roc 2008-06 0068bd40  unit: Ogre::RbxSceneManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bd40
//
// 0068bd40  8b15c4478000         mov edx, dword ptr [0x8047c4]
// 0068bd46  8b01                 mov eax, dword ptr [ecx]
// 0068bd48  8b803c030000         mov eax, dword ptr [eax + 0x33c]
// 0068bd4e  52                   push edx
// 0068bd4f  8b542408             mov edx, dword ptr [esp + 8]
// 0068bd53  52                   push edx
// 0068bd54  ffd0                 call eax
// 0068bd56  c20400               ret 4

struct SceneManager {
    void setShadowUseInfiniteFarPlane(bool value);
};

extern int g_var;

void SceneManager::setShadowUseInfiniteFarPlane(bool value)
{
    void (__thiscall *fn)(void*, bool, int);
    fn = *(void (__thiscall **)(void*, bool, int))(*(char**)this + 0x33c);
    fn(this, value, g_var);
}
