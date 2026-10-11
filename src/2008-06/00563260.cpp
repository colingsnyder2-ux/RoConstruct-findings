// from server: 65% by colin
struct ContentProvider {
    int getCachedRemoteSourceLoadState();
};

struct LinkedScriptLoadData {
    int state;
    int value;
};

extern "C" void __stdcall sub_501AE0(void *);
extern "C" void __stdcall sub_5631C0(void *);

int ContentProvider::getCachedRemoteSourceLoadState()
{
    LinkedScriptLoadData data;
    sub_501AE0(&data);
    int result = data.value;
    sub_5631C0(&data);
    return result;
}
