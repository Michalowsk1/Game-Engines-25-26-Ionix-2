#include "LayerSystem/Layers/LayerInput.h"
#include "EventSystem/Event.h"
#include "Architecture/Application.h"
#include <iostream>

namespace IonixEngine
{
    void LayerInput::OnAttach() {}

    void LayerInput::OnDetach() {}

    void LayerInput::OnUpdate() 
    {
        std::cout << "Input Update ran\n";
    }

    void LayerInput::OnEvent(IonixEvent& e)
    {
        // Switch statement routes the event and invokes the relevant event handler

        switch (e.Type)
        {


            // Add more cases as needed.... (Note: Most engine features don't require events, they
            //                              can just be callable functions.
        }
    }

    void LayerEditor::OnWindowClosedEvent(WindowClosedEvent& e)
    {
        std::cout << "IonixEvent: Window closed";

        Application::Get().m_Running = false;
        e.Handled = true;
    }

    void LayerEditor::OnWindowMinimizdEvent(WindowMinimizedEvent& e)
    {
        std::cout << "IonixEvent: Window closed\n";

        e.Handled = true;
    }

    //void LayerEditor::OnWindowShownEvent(WindowShownEvent& e)
    //{
    //    std::cout << "IonixEvent: Window Showed\n";

    //    e.Handled = true;
    //}

    //void LayerEditor::OnWindowMaximizedEvent(WindowMaximizedEvent& e)
    //{
    //    std::cout << "IonixEvent: Window Maximized\n";

    //    e.Handled = true;
    //}
}