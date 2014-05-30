﻿#pragma once

#include "..\Common\DeviceResources.h"
#include "..\Common\StepTimer.h"

namespace emptyExample
{
	// This sample renderer instantiates a basic rendering pipeline.
	class Renderer
	{
	public:
		Renderer(const std::shared_ptr<Angle::DeviceResources>& deviceResources);
		void CreateDeviceDependentResources();
		void CreateWindowSizeDependentResources();
		void ReleaseDeviceDependentResources();
		void Update(DX::StepTimer const& timer);
		void Render();
		void StartTracking();
		void TrackingUpdate(float positionX);
		void StopTracking();
		bool IsTracking() { return m_tracking; }

	private:
		// Cached pointer to device resources.
        std::shared_ptr<Angle::DeviceResources> m_deviceResources;

		// Variables used with the rendering loop.
		bool	m_loadingComplete;
		bool	m_tracking;
	};
}

