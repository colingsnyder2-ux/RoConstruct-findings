// from server: 24% by tester




struct Instance;

struct ServiceProvider {
    int serviceArray;
    bool findService(const char* name) const;
};

Instance* __stdcall findServiceHelper(Instance* self);

bool ServiceProvider::findService(const char* name) const {
    Instance* result = 0;
    if (this->serviceArray != 0) {
        result = findServiceHelper((Instance*)this);
    }
    *(Instance**)name = result;
    return true;
}
