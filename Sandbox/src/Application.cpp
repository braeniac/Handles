#include "Handles.h"

class Sandbox : public Handles::Application
{
public:
    Sandbox()
    {
    }

    ~Sandbox()
    {
    }
};

int main() 
{
    Sandbox* sandbox = new Sandbox();
    sandbox->Run();
    delete sandbox;
    return 0; 
}