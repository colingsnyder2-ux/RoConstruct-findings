// from server: 86% by atomic.potato
typedef unsigned short WORD;

struct SceneString
{
    SceneString& operator=(const char*);
};

extern "C" SceneString& assign_string(SceneString*, const char*);
extern const char g_scene_manager[];
extern const char g_name[];

struct Ogre_RbxSceneManagerFactory
{
    char pad0[4];
    SceneString m_name;
    char pad1[24];
    SceneString m_type;
    char pad2[4];
    WORD m_initialized;
    char m_flag;

    int dummy();
};

int Ogre_RbxSceneManagerFactory::dummy()
{
    m_name = g_scene_manager;
    m_type = g_name;
    m_initialized = 1;
    m_flag = 0;
    return 1;
}
