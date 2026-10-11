// from server: 44% by colin
struct SimpleSceneManager {
    char pad[4];
    void* field4;
    void* getSomething();
};

void* SimpleSceneManager::getSomething()
{
    return (char*)field4 + 8;
}
