// from server: 36% by atomic.potato
struct DirectPhysicsReceiver
{
    DirectPhysicsReceiver *f();
};

DirectPhysicsReceiver *DirectPhysicsReceiver::f()
{
    DirectPhysicsReceiver *result = this;
    result->f();
    return result;
}
